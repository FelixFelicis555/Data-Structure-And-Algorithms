
#include<bits/stdc++.h>
using namespace std;
string precisionCompute(int x, int y, int n)
{
    string ans="";
    if (x == 0) {
        ans+="0";
        return ans;
    }


    // Integral division
    int d = x / y;

    // Now one by print digits after dot
    // using school division method.

    for (int i = 0; i <= (n+1); i++) {
        /*if(i==(n+1)){
            if(d!=0){
                char ss=ans[ans.length()-1];
                int nt=ss-'0';
                if(nt>=5){
                    ans[ans.length()-1]=((nt+1))+'0';
                }
                else{
                   ans[ans.length()-1]=(nt)+'0';
                }

            }
        }*/
        ans+=to_string(d);
        x = x - (y * d);
        if (x == 0)
            break;
        x = x * 10;
        d = x / y;
        if (i == 0)
            ans+=".";

    }
    return ans;

}
int main(){
 int t;
 int a,b;
 cin>>t;
 while(t--){
    cin>>a>>b;
    cout<<precisionCompute(a,b,100)<<endl;
    //cout<<precisionCompute(a,b,100).length()<<endl;



 }
//string s="777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777";
//


}
