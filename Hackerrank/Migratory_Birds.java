import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

class test {
     public static void main(String[] args)
     {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] a = new int[n];
         int[] c=new int[] {0,0,0,0,0};
        for(int i = 0; i < n; i++)
        {
            a[i] = in.nextInt();
            if(a[i]==1)
            {
                c[0]=c[0]+1;
            }
            else if(a[i]==2)
            {
                c[1]=c[1]+1;
            }
            else if(a[i]==3)
            {
                c[2]=c[2]+1;
            }
            else if(a[i]==4)
            {
                c[3]=c[3]+1;
            }
            else
            {
                c[4]=c[4]+1;
            }
        }

        int max=c[0],p=0;
        for(int i=0;i<5;i++)
        {
            //System.out.println(c[i]);
            if (c[i]>max)
            {
                max=c[i];
                p=i+1;
            }
        }
        System.out.println(p);

}
}
