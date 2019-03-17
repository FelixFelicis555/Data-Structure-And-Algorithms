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

//Conversion of binary into decimal
int convert_decimal(string s,int p){
    int a1,a2,a3,a4,val;
    if(p==4){
    a4=(s[0])-'0';
    a3=(s[1])-'0';
    a2=(s[2])-'0';
    a1=(s[3])-'0';
    val=8*a4+4*a3+2*a2+1*a1;}
    else{
        a2=(s[0])-'0';
        a1=(s[1])-'0';
        val=a1*1+a2*2;
        }
    return val;
}


//Conversion of decimal into binary
string convert_binary(int s){
    bitset<4> b(s);
    string mm = b.to_string<char,std::string::traits_type,std::string::allocator_type>();
    //cout<<"Aftr binary con : "<<mm<<endl;
    return mm;
}

//Straight Permutation
string st_perm(string s){
	int st_table[32]={16,7,20,21,
                       29,12,28,17,
                        1,15,23,26,
                        5,18,31,10,
                        2,8,24,14,
                         32,27,3,9,
                         19,13,30,6,
                         22,11,4,25 };

	string se="";
	for(int i=0;i<32;i++){
		se+=s[st_table[i]-1];
	}
	return se;

}

//Application of S-Boxes
string s_boxes(string ss){
    int s1[4][16]={{14,4,13,1,2,15,11,8,3,10,6,12,5,9,0,7},
                    {0,15,7,4,14,2,13,1,10,6,12,11,9,5,3,8},
                    {4,1,14,8,13,6,2,11,15,12,9,7,3,10,5,0},
                    {15,12,8,2,4,9,1,7,5,11,3,14,10,0,6,13}};

     int s2[4][16]={{15,1,8,14,6,11,3,4,9,7,2,13,12,0,5,10},
                    {3,13,4,7,15,2,8,14,12,0,1,10,6,9,11,5},
                    {0,14,7,11,10,4,13,1,5,8,12,6,9,3,2,15},
                    {13,8,10,1,3,15,4,2,11,6,7,12,0,5,14,9}};

    int s3[4][16]={{10,0,9,14,6,3,15,5,1,13,12,7,11,4,2,8},
                    {13,7,0,9,3,4,6,10,2,8,5,14,12,11,15,1},
                    {13,6,4,9,8,15,3,0,11,1,2,12,5,10,14,7},
                    {1,10,13,0,6,9,8,7,4,15,14,3,11,5,2,12}};

    int s4[4][16]={{7,13,14,3,0,6,9,10,1,2,8,5,11,12,4,15},
                    {13,8,11,5,6,15,0,3,4,7,2,12,1,10,14,9},
                    {10,6,9,0,12,11,7,13,15,1,3,14,5,2,8,4},
                    {3,15,0,6,10,1,13,8,9,4,5,11,12,7,2,14}};

     int s5[4][16]={{2,12,4,1,7,10,11,6,8,5,3,15,13,0,14,9},
                    {14,11,2,12,4,7,13,1,5,0,15,10,3,9,8,6},
                    {4,2,1,11,10,13,7,8,15,9,12,5,6,3,0,14},
                    {11,8,12,7,1,14,2,13,6,15,0,9,10,4,5,3}};


    int s6[4][16]={{12,1,10,15,9,2,6,8,0,13,3,4,14,7,5,11},
                    {10,15,4,2,7,12,9,5,6,1,13,14,0,11,3,8},
                    {9,14,15,5,2,8,12,3,7,0,4,10,1,13,11,6},
                    {4,3,2,12,9,5,15,10,11,14,1,7,6,0,8,13}};


    int s7[4][16]={{4,11,2,14,15,0,8,13,3,12,9,7,5,10,6,1},
                    {13,0,11,7,4,9,1,10,14,3,5,12,2,15,8,6},
                    {1,4,11,13,12,3,7,14,10,15,6,8,0,5,9,2},
                    {6,11,13,8,1,4,10,7,9,5,0,15,14,2,3,12}};

    int s8[4][16]={{13,2,8,4,6,15,11,1,10,9,3,14,5,0,12,7},
                    {1,15,13,8,10,3,7,4,12,5,6,11,0,14,9,2},
                    {7,11,4,1,9,12,14,2,0,6,10,13,15,3,5,8},
                    {2,1,14,7,4,10,8,13,15,12,9,0,3,5,6,11}};


    string s11,s22,s33,st="";
    //cout<<"got string : "<<ss<<endl;
    int i=0;
    while(i<48)
    {
        s11=ss.substr(i,6);
        //cout<<"6 substring : "<<s11<<" "<<i<<endl;
        i+=6;
        s33=s11.substr(1,4);
        //cout<<"6 substring middle: "<<s33<<endl;
        s22=s11.substr(0,1);
        s22+=s11.substr(5,1);
        //cout<<s22<<endl;
        //cout<<"6 substring extreme: "<<s22<<endl;
        int a=convert_decimal(s22,2);
        //cout<<"6 substring extreme in decimal : "<<a<<endl;
        int b=convert_decimal(s33,4);
        //cout<<"6 substring middle in decimal : "<<b<<endl;
        //cout<<b<<endl;
        //cout<<i<<endl;
        int v;
        if(i==6){
                //cout<<"p0"<<endl;
             v=s1[a][b];
            //cout<<"p"<<endl;
            st+=convert_binary(v);
            //cout<<"p1"<<endl;
        }
        else if(i==12){
             v=s2[a][b];
            st+=convert_binary(v);
        }
        else if(i==18){
             v=s3[a][b];
            st+=convert_binary(v);
        }
        else if(i==24){
             v=s4[a][b];
            st+=convert_binary(v);
        }
        else if(i==30){
             v=s5[a][b];
            st+=convert_binary(v);
        }
        else if(i==36){
            v=s6[a][b];
            st+=convert_binary(v);
        }
        else if(i==42){
            v=s7[a][b];
            st+=convert_binary(v);
        }
        else if(i==48){
             v=s8[a][b];
            st+=convert_binary(v);
        }
        //cout<<"value in s-table : "<<v<<" "<<st<<endl;
    }
return st;

}




string xor_op(string key,string er,int p){
    string ss="";
    for(int i=0;i<p;i++){
        int a=key[i]-'0';
        int b=er[i]-'0';
        int c=a^b;
        ss+=to_string(c);
    }
    return ss;
}

//Application of expansion table
string expansion(string s){
	int exp_table[48]={32,1,2,3,4,5,
                  4,5,6,7,8,9,
                  8,9,10,11,12,13,
                 12,13,14,15,16,17,
                 16,17,18,19,20,21,
                 20,21,22,23,24,25,
                 24,25,26,27,28,29,
                 28,29,30,31,32,1 };

	string ep="";
	for(int i=0;i<48;i++){
		ep+=s[exp_table[i]-1];
	}
	return ep;

}

//Initial Permutation
string intial_per(string s){
	int ip_table[64]={58,50,42,34,26,18,10,2,
				60,52,44,36,28,20,12,4,
				62,54,46,38,30,22,14,6,
				64,56,48,40,32,24,16,8,
				57,49,41,33,25,17,9,1,
				59,51,43,35,27,19,11,3,
				61,53,45,37,29,21,13,5,
				63,55,47,39,31,23,15,7 };

	string ip="";
	for(int i=0;i<64;i++){
		ip+=s[ip_table[i]-1];
	}
	return ip;

}

//Final Permutation
string final_per(string s){
	int fp_table[64]={40,8,48,16,56,24,64,32,
				39,7,47,15,55,23,63,31,
				38,6,46,14,54,22,62,30,
				37,5,45,13,53,21,61,29,
				36,4,44,12,52,20,60,28,
				35,3,43,11,51,19,59,27,
				34,2,42,10,50,18,58,26,
				33,1,41,9,49,17,57,25 };

	string fp="";
	for(int i=0;i<64;i++){
		fp+=s[fp_table[i]-1];
	}
	return fp;


}


int main(){
	string txt,str,b1,b,fp,ip,st,t1,t2,ll,rr,s1,er;
	int r,l,c;

	cout<<"Enter the plain text : \n";
	getline(cin,txt);

	cout<<"Enter the key : "<<endl;
	string kk;
	cin>>kk;
    int kl=kk.length();
    //cout<<kl<<endl;
    vector<string>key;
    //Convert into binary
    st="";
    for(int i=0;i<kl;i++)
    {
            bitset<8> bin_x(int(kk[i]));
            string m = bin_x.to_string<char,std::string::traits_type,std::string::allocator_type>();
			st+=m;

    }
    //cout<<st<<endl;
    string s=st.substr(0,8*8);
    string pc1_out=per_choice1(s);
    string ss=pc1_out;
    string cc,dd,a1;
    cc=ss.substr(0,28);
    dd=ss.substr(28,28);
    for(int j=1;j<=16;j++){
    cc=ss.substr(0,28);
    dd=ss.substr(28,28);
    string bc="",bd="";
    if(j==1||j==2||j==9||j==16)
    {
    a1=cc.substr(0,1);
    bc=cc.substr(1,27);
    bc+=a1;
    a1=dd.substr(0,1);
    bd=dd.substr(1,27);
    bd+=a1;
    }
    else
    {
        a1=cc.substr(0,2);
        bc=cc.substr(2,26);
        bc+=a1;
        a1=dd.substr(0,2);
        bd=dd.substr(2,26);
        bd+=a1;
    }
    string cd="";
    cd=cd+bc+bd;
    string pc2_out=per_choice2(cd);
    key.push_back(pc2_out);
    ss=cd;
    }
    for(int i=0;i<16;i++){
        cout<<key[i]<<endl;;
	}




	//Removing Spaces
	/*str="";
	for(int i=0;i<txt.length();i++){
		if(txt[i]!=' '){
			str+=txt[i];
		}
	}*/
    str=txt;

	l=str.length();
	if(l!=40){
        for(int i=l;i<40;i++){
            str+=" ";
        }
	}


	//For each block
	c=str.length()/8;
	cout<<"Total number of blocks : "<<c<<endl;
	cout<<endl;
	ip="";
	fp="";
	b="";

	for(int i=1;i<=c;i++)
	{
		cout<<"-----------------------------------------------------------------------------------------------------------------------"<<endl;
		cout<<"Block "<<i<<endl;
		cout<<endl;
		b1="";
		for(int j=((i-1)*8);j<(i*8);j++){
			b1+=str[j];
		}
		cout<<"Plain Text of Block before Any Permutation : "<<b1<<endl;
		st="";
		ip=" ";
		for(int k=0;k<b1.length();k++)
		{
			bitset<8> bin_x(int(b1[k]));
			//cout<<int(b1[k])<<" "<<bin_x<<endl;
			string m = bin_x.to_string<char,std::string::traits_type,std::string::allocator_type>();
			b+=m;
			st+=m;



		}


        //st is initial 64 bit value
        //t1 initial permutation value
		t1=intial_per(st);

		ll=t1.substr(0,8*4);
		//cout<<ll<<endl;
		rr=t1.substr(32,8*4);
		//cout<<rr<<endl;

		//perform operation 16 timesNITK Surathkal 575025
		for(int i=0;i<16;i++){

            //Expansion
            er=expansion(rr);
            //xor with key
            //cout<<er.size()<<endl;

            er=xor_op(key[i],er,48);
            //cout<<er.size()<<endl;

            //s-boxes to get 32 bit
            //cout<<"Before : "<<er<<endl;
            er=s_boxes(er);
            //cout<<"After : "<<er<<endl;
            //cout<<er.size()<<endl;
            er=st_perm(er);
            //cout<<"llllll"<<endl;

            er=xor_op(er,ll,32);

            ll=rr;
            rr=er;

            }

            s1=rr+ll;
            //cout<<"After 16 round : "<<endl;
            //cout<<s1<<endl;

		t2=final_per(s1);
		//cout<<t2<<endl;
		ip="";
		fp="";
		string t3="";
		for(int h=0;h<st.length();h++){
			if(h%8==0 && h!=0){
				ip+="  ";
				fp+="  ";
				t3+="  ";
			}
			t3+=st[h];
			ip+=t1[h];
			fp+=t2[h];
		}
		//cout<<"Before applying Intial Permutation : "<<endl;
		//cout<<t3<<endl;
		//cout<<endl;
		//cout<<"After applying Intial Permutation : "<<endl;
		//cout<<ip<<endl;
		//cout<<endl;
		cout<<"After applying final Permutation : "<<endl;
		cout<<fp<<endl;
		//cout<<endl;

		std::stringstream sstream(t2);
    	std::string output;
    	while(sstream.good())
    	{
        	std::bitset<8> bits;
        	sstream >> bits;
        	char c = char(bits.to_ulong());
        	output += c;
    	}

    	//cout<<"Ascii conversion after final Permutation : "<<output<<endl;
    	cout<<endl;


	}}

