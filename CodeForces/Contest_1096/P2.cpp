//Abhishek
#include<bits/stdc++.h>
using namespace std;

string per_choice1(string s){
	int pc1[56]={57,49,41,33,25,17,9,
                 1,58,50,42,34,26,18,
                 10,2,59,51,43,35,27,
                 19,11,3,60,52,44,36,
                 63,55,47,39,31,23,15,
                 7,62,54,46,38,30,22,
                 14,6,61,53,45,37,29,
                 21,13,5,28,20,12,4};

	string p="";
	for(int i=0;i<56;i++){
		p+=s[pc1[i]-1];
	}
	return p;

}

string per_choice2(string s){
	int pc2[48]={14,17,11,24,1,5,3,28,
                 15,6,21,10,23,19,12,4,
                 26,8,16,7,27,20,13,2,
                 41,52,31,37,47,55,30,40,
                 51,45,33,48,44,49,39,56,
                 34,53,46,42,50,36,29,32};

	string p="";
	for(int i=0;i<48;i++){
		p+=s[pc2[i]-1];
	}
	return p;

}

int main(){
    string txt,str,b1,b,fp,ip,st,t1,t2,s,pc1_out;
	int r,l;
	cout<<"Enter the plain text : \n";
	getline(cin,txt);
	str="";
	for(int i=0;i<txt.length();i++){
		if(txt[i]!=' '){
			str+=txt[i];
		}
	}
	int ch;
	l=str.length();
	if(l<7){
        cout<<"Error Encountered!!\nPlease enter string length is greater than 7."<<endl;
    }
    else{
        cout<<"Enter your choice(1/2) :"<<endl;
        cin>>ch;
        st="";
        for(int i=0;i<l;i++){
            bitset<8> bin_x(int(str[i]));
            string m = bin_x.to_string<char,std::string::traits_type,std::string::allocator_type>();
			st+=m;

        }
        cout<<st<<endl;

        if(ch==1){
            s=st.substr(0,8*8);
            //cout<<s<<endl;
            pc1_out=per_choice1(s);
            cout<<pc1_out<<endl;


        }
        else{
        //cout<<st<<endl;
        s=st.substr(st.length()-64,64);
        //cout<<s<<endl;
        pc1_out=per_choice1(s);
        cout<<pc1_out<<endl;}
        cout<<pc1_out<<endl;
        string ss=pc1_out;
        string c,d,a1;
        c=ss.substr(0,28);
        d=ss.substr(28,28);
        cout<<"c : "<<c<<endl;
        cout<<"d : "<<d<<endl;
        ofstream myfile;
            myfile.open ("Testcase_output.txt");
        for(int j=1;j<=16;j++){
            c=ss.substr(0,28);
            d=ss.substr(28,28);
            string bc="",bd="";
            if(j==1||j==2||j==9||j==16){
            a1=c.substr(0,1);
            bc=c.substr(1,27);
            bc+=a1;
            a1=d.substr(0,1);
            bd=d.substr(1,27);
            bd+=a1;
            }
            else{
            a1=c.substr(0,2);
            bc=c.substr(2,26);
            bc+=a1;
            a1=d.substr(0,2);
            bd=d.substr(2,26);
            bd+=a1;
            }
            string cd="";
            cd=cd+bc+bd;
            string pc2_out=per_choice2(cd);

            //cout<<"Round "<<j<<" key : ";
            //myfile<<"Round "<<j <<" key : ";


            for(int x=0;x<pc2_out.length();x++){
                if(x%8==0&&x!=0){
                    cout<<"  ";
                    myfile<<"  ";
                }
                cout<<pc2_out[x];
                myfile<<pc2_out[x];
            }
            cout<<endl;
            myfile<<"\n",
            ss=cd;


            //myfile << "Writing this to a file.\n";
            myfile.close();

        }





    }





}
