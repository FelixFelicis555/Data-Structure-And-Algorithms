import java.util.Scanner;
class countfruits{
    public static void main(String args[]){
        int s,t,a,b,cn=0,cm=0,d;
        int m,i,n;
        Scanner sc = new Scanner(System.in);
        s=sc.nextInt();
        t=sc.nextimport java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
        public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int m = in.nextInt();
        int[] a = new int[n];
        for(int i = 0; i < n; i++){
            a[i] = in.nextInt();
        }
        int[] b = new int[m];
                  
        for(int i = 0; i < m; i++){
            b[i] = in.nextInt();
        }
           int max=b[0];
        for(int i = 1; i < m; i++){
            if(b[i]>max)
                max=b[i];
        }
           //System.out.println(max);
            
            int x=1,fa=0,fb=0,c=0;
       while(x<=max)
       {
       for(int i=0;i<n;i++)
       {
           if(x%a[i]!=0)
           {fa=1;
               break;}
               
       }
       for(int i=0;i<m;i++)
       {
           if(b[i]%x!=0)
           {fb=1;
            break;}
               
       }
       if(fa==0&&fb==0)
       {c=c+1;
        //System.out.println(x);
       }
        
       fa=0;fb=0;
           x++;
       }
            System.out.println(c);
    }
}
stem.out.println(cn);


    }
}