#include <iostream>
using namespace std;
int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int num;
	    cin>>num;
	    int sum=0;
	    while(num>0){
	        sum=sum+num%10;
	        num=num/10;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
