import java.util.Scanner;
class countfruits{
    public static void main(String args[]){
        int s,t,a,b,cn=0,cm=0,d;
        int m,i,n;
        Scanner sc = new Scanner(System.in);
        s=sc.nextInt();
        t=sc.nextInt();
        a=sc.nextInt();
        b=sc.nextInt();
        m=sc.nextInt();
        n=sc.nextInt();
        int[] p=new int[m];
        int[] q=new int[n];
        for (i=0;i<m;i++){
            p[i]=sc.nextInt();
        }
        for (i=0;i<n;i++){
            q[i]=sc.nextInt();
        }
        //for apples
        for (i=0;i<m;i++){
            d=p[i]+a;
            if((d>=s) &&(d<=t))
            {
                cm=cm+1;
            }
        }
        for (i=0;i<n;i++){
            d=q[i]+b;
            if((d>=s) &&(d<=t))
            {
                cn=cn+1;
            }
        }
        System.out.println(cm);
        System.out.println(cn);


    }
}