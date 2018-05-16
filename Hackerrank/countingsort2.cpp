import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args)
{
    Scanner in=new Scanner(System.in);
    int n,i,j;
    n=in.nextInt();
    int A[]=new int[n];

    for(i=0;i<n;i++)
        {
        int x= in.nextInt();
        A[x]++;
    }

    for(i=0;i<100;i++)
        {
        for(j=0;j<A[i];j++)
        System.out.print(i+" ");
    }

}
}
