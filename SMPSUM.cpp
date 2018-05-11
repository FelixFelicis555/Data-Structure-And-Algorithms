#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int a,b;
	cin>>a>>b;
	int s=0;
	for(int i=a;i<=b;i++){
		s=s+i*i;
	}
	cout<<s;
	return 0;
}
