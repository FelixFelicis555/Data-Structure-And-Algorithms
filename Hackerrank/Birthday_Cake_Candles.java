import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    static int birthdayCakeCandles(int n, int[] ar) {
        // Complete this function
        int max,c=0,i;
        max=ar[0];
        for(int j=1;j<n;j++)
        {
            if(max<ar[j])
            {
                max=ar[j];
            }
            
    }
        for(int j=0;j<n;j++)
        {
            if(ar[j]==max)
                c=c+1;
            
        }
        return c;
        
    }  

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] ar = new int[n];
        for(int ar_i = 0; ar_i < n; ar_i++){
            ar[ar_i] = in.nextInt();
        }
        int result = birthdayCakeCandles(n, ar);
        System.out.println(result);
    }
}
