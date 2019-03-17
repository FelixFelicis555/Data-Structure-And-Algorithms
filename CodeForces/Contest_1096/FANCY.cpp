#include<bits/stdc++.h>
using namespace std;
int main()
{

        int t1;
        string sub,sen;
        cin>>t1;
        for(int i=0;i<t1;i++){

        cout.flush();
        getline (cin, sen);
        sub="not";
        size_t pos;
	    pos = sen.find(sub);
	    cout<<sen<<endl;
	    cout<<pos<<endl;
	    cout<<sub<<endl;
	    if (pos != std::string::npos)
		cout << "Real Fancy"  <<endl;
	    else
	    cout << "regularly fancy" << endl;

        }


}
