import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        int i,j;
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int k = in.nextInt();
        int[] height = new int[n];
        for(i=0; i < n;i++){
            height[i] = in.nextInt();
        }
        // your code goes here
       int max=height[0];
        for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
                if(height[i]>max)
                    max=height[i];
            }
        }
        if(k>=max)
        {
            System.out.println("0");
        }
        else
        {System.out.println(max-k);}
    }
}
