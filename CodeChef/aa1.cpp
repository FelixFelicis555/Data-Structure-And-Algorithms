#include <iostream>
#include <limits>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cassert>

constexpr unsigned int NBITS = 32 ; // #bits required to cater to numbers up to 10^9

// sanity checks
static_assert( std::numeric_limits<unsigned int>::digits >= NBITS, "" ) ;
static_assert( ( (1U<<(NBITS-1)) + (1U<<(NBITS-2)) ) > 1'000'000'000, "" ) ;

void fill_higher_bit( unsigned int lower_bit_pos, std::vector<unsigned int>& target_numbers )
{
    const unsigned int low_bit_value = 1U << lower_bit_pos ;
    for( unsigned int pos = lower_bit_pos + 1 ; pos < NBITS ; ++pos )
        target_numbers.push_back( ( 1U << pos ) + low_bit_value ) ;
}

std::vector<unsigned int> make_target_numbers()
{
    std::vector<unsigned int> numbers ;

    for( unsigned int lower_bit_pos = 0 ; lower_bit_pos < (NBITS-1) ; ++lower_bit_pos )
        fill_higher_bit( lower_bit_pos, numbers ) ;

    std::sort( numbers.begin(), numbers.end() ) ; // sort it to enable binary search
    return numbers ;
}

int main()
{
    const auto start = std::clock() ;
    const std::vector<unsigned int> target_numbers = make_target_numbers() ;
    const auto end = std::clock() ;
    std::cout << "creating the look up table (of size " << target_numbers.size() << ") took "
              << (end-start) * 1000.0 / CLOCKS_PER_SEC << " milliseconds.\n" ;

    for( unsigned int n : { 10, 22, 4, 1000, 1'000'000, 1'000'000'000 } )
    {
        // https://en.cppreference.com/w/cpp/algorithm/lower_bound
        const auto next = std::lower_bound( target_numbers.begin(), target_numbers.end(), n ) ;

        if( next == target_numbers.begin() ) std::cout << *next - n << '\n' ;
        else
        {
            assert( target_numbers.back() > 1'000'000'000 ) ;
            const auto prev = next-1 ;
            std::cout << std::min( *next - n, n - *prev ) << '\n' ;
        }
    }
}
