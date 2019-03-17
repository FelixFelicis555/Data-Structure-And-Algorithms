#include<stdio.h>
main()
{
    int t,a,i;
    float b,c;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %f",&a,&b);
        if(a>1000)
        {
            c=(a*b)/10;
            printf("%f\n",a*b-c);
        }
        else
            printf("%f\n",a*b);
    }
}
