#include<bits/stdc++.h>
using namespace std;
string cpu(string str1, string str2)
{
    string result;
    int n1 = str1.length(), n2 = str2.length();

    for (int i=0, j=0; i<=n1-1&&j<=n2-1; i++,j++)
    {
        if (str1[i] != str2[j])
            break;
        result.push_back(str1[i]);
    }
    return (result);
}
int main()
{
	int n,r,i,q;
	cin>>n;
	string s[n],p,s1,result,lcp;
	for(i=0;i<n;i++)
	cin>>s[i];
	cin>>q;
	result=s[0];
	while(q--)
	{
		s1="null";
		cin>>r>>p;
		for(i=0;i<r;i++)
		{
			lcp=cpu(s[i],p);
			if(lcp.length()>s1.length())
			{
				s1=lcp;
				result=s[i];
			 }
			 else if(lcp.length()==s1.length())
			 {
			 	if(lexicographical_compare(s[i].begin(), s[i].end(),result.begin(), result.end()))
			 	result=s[i];
			  }
		}
		cout<<result<<endl;
	}
}
