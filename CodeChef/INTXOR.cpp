#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll n,a,t,v,w,r,t1,t2,t3,t4,t5,k,b,a1,a2,a3,a4,a5,j;
    cin>>t;
    while(t--){
        cin>>n;
        vector<ll>ans;
        if(n%4==0){
                for(j=1;j<=n;j+=4){
                cout<<"1"<<" "<<j<<" "<<j+1<<" "<<j+2<<endl;
                cin>>t1;
                cout<<"1"<<" "<<j+1<<" "<<j+2<<" "<<j+3<<endl;
                cin>>t2;
                cout<<"1"<<" "<<j+2<<" "<<j+3<<" "<<j<<endl;
                cin>>t3;
                cout<<"1"<<" "<<j+3<<" "<<j<<" "<<j+1<<endl;
                cin>>t4;
                ans.push_back(t1^t3^t4);
                ans.push_back(t1^t2^t4);
                ans.push_back(t1^t3^t2);
                ans.push_back(t2^t3^t4);
                }

        }
        else if(n%5==0){
                for(k=1;k<=n;k+=5){
                    cout<<"1"<<" "<<k<<" "<<k+1<<" "<<k+2<<endl;
                    cin>>t1;
                    cout<<"1"<<" "<<k+1<<" "<<k+2<<" "<<k+3<<endl;
                    cin>>t2;
                    cout<<"1"<<" "<<k+2<<" "<<k+3<<" "<<k+4<<endl;
                    cin>>t3;
                    cout<<"1"<<" "<<k+3<<" "<<k+4<<" "<<k<<endl;
                    cin>>t4;
                    cout<<"1"<<" "<<k+4<<" "<<k<<" "<<k+1<<endl;
                    cin>>t5;
                    a1=t1^t2^t4;
                    a2=t2^t3^t5;
                    a3=t5^a2^a1;
                    a4=t1^a2^a3;
                    a5=a3^a4^t2;
                    ans.push_back(a2);
                    ans.push_back(a3);
                    ans.push_back(a4);
                    ans.push_back(a5);
                    ans.push_back(a1);

            }

        }
        else{
            r=n;
            a=0;//count of 4
            while(r%5!=0){
               r=r-4;
               a++;
            }
            b=r/5;//coun of 5
            for(j=1;j<=(a*4);j+=4){
                cout<<"1"<<" "<<j<<" "<<j+1<<" "<<j+2<<endl;
                cin>>t1;
                cout<<"1"<<" "<<j+1<<" "<<j+2<<" "<<j+3<<endl;
                cin>>t2;
                cout<<"1"<<" "<<j+2<<" "<<j+3<<" "<<j<<endl;
                cin>>t3;
                cout<<"1"<<" "<<j+3<<" "<<j<<" "<<j+1<<endl;
                cin>>t4;
                ans.push_back(t1^t3^t4);
                ans.push_back(t1^t2^t4);
                ans.push_back(t1^t3^t2);
                ans.push_back(t2^t3^t4);
                }
                for(k=j;k<=n;k+=5){
                    cout<<"1"<<" "<<k<<" "<<k+1<<" "<<k+2<<endl;
                    cin>>t1;
                    cout<<"1"<<" "<<k+1<<" "<<k+2<<" "<<k+3<<endl;
                    cin>>t2;
                    cout<<"1"<<" "<<k+2<<" "<<k+3<<" "<<k+4<<endl;
                    cin>>t3;
                    cout<<"1"<<" "<<k+3<<" "<<k+4<<" "<<k<<endl;
                    cin>>t4;
                    cout<<"1"<<" "<<k+4<<" "<<k<<" "<<k+1<<endl;
                    cin>>t5;
                    a1=t1^t2^t4;
                    a2=t2^t3^t5;
                    a3=t5^a2^a1;
                    a4=t1^a2^a3;
                    a5=a3^a4^t2;
                    ans.push_back(a2);
                    ans.push_back(a3);
                    ans.push_back(a4);
                    ans.push_back(a5);
                    ans.push_back(a1);

            }





        }
        cout<<"2"<<" ";
        for(j=0;j<ans.size();j++){
            cout<<ans[j]<<" ";
        }
        cout<<endl;
        ll g;
        cin>>g;








    }






}
