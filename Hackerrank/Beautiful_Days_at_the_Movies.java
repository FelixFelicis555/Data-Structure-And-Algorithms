import java.io.*;
import java.util.*;
class test{

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        int i,j,k,x,c=0,r,d,n;
        Scanner in=new Scanner(System.in);
        i=in.nextInt();
        j=in.nextInt();
        k=in.nextInt();
        for(x=i;x<=j;x++)
        {
            n=x;
            r=0;
            while(n!=0)
            {
                r=10*r+n%10;
                n=n/10;
            }
        
            d=x-r;
            if(d<0)
            {
                d=-(d);
            }
            if(d%k==0)
                c=c+1;
        }
        System.out.println(c);
        
        
        
    }
}
