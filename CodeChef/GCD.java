import java.math.BigInteger;
import java.util.*;
import java.lang.*;
public class Solution {
	public static long MOD = 1000000007;
	public static long conversion (String s){
		long res = 0;
		for (int i = 0; i<s.length(); i++){
			res = res*10;
			res = (res + s.charAt(i) - '0') % MOD;
		}
		
		return res;
	}
	
	public static void main(String args[]) throws Exception {
		Scanner sc = new Scanner(System.in);

		int t = Integer.parseInt(sc.nextLine());
		BigInteger mod = new BigInteger(String.valueOf(1000000007));
		
		while (t-- > 0){
			String s = sc.nextLine();
			String v[] = s.split(" ");
			//BigInteger a = new BigInteger(String.valueOf(conversion (v[0])));
			BigInteger a = new BigInteger(v[0]);
			BigInteger b = new BigInteger(v[1]);
			BigInteger n = new BigInteger(v[2]);
			long x1,x2,x3,ans,x4;
			x3=abs(x1-x2);
			x3=new BigInteger(x3);
			if(a==b){
        	x1=(a.modPow(n, mod));
        	x2=(b.modPow(n, mod));
        	ans=((x1+x2)%mod);
    }
    else{
    x1=(a.modPow(n, x3));
    x2=(b.modPow(n, x3));
    x4=new BigInteger((x1+x2)%x3);
    ans=x4.gcd(x3)%mod;
			System.out.println(ans);
		}
	}
}}
'''a,b,n = input().split()
    a,b,n = int(a),int(b),int(n)
    flag = 0
    m = 10 ** 9 + 7
    if a > b:
        p = a-b
    elif a == b:
        x = pow(a,n,m)
        y = pow(b,n,m)
        print((x+y)%m)
        flag = 1
    else:
        p = b-a
    
    x = pow(a,n,p)
    y = pow(b,n,p)
    if flag == 0:
        print(math.gcd((x+y)%p,p)%m)'''