#include <stdio.h>
#include<string.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int m,n,i,j,q;
	    char a[1002][1002];
	    char s1[1002],s2[1002];
	    scanf("%s",s1);
	    scanf("%s",s2);
	    m=strlen(s1);
	    n=strlen(s2);
	    a[0][0]='0';
	    for(i=0;i<m+1;i++)
	    {
	        for(j=0;j<n+1;j++)
	        {
	            if(i==0)
	            {
	                a[i][j+1]=s2[j];
	            }
	            if(j==0)
	            {
	                a[i+1][j]=s1[i];
	            }
	            if(i!=0&&j!=0)
	            {
	                if(a[i-1][j]=='0'||a[i][j-1]=='0')
	                a[i][j]='1';
	                else
	                a[i][j]='0';
	            }
	            printf("%c ",a[i][j]);

	        }
	       printf("\n");
	    }

	    scanf("%d",&q);
	    for(i=0;i<q;i++)
	    {
	        int u,v;
	        scanf("%d%d",&u,&v);
	        printf("%c",a[v][u]);
	    }
	    printf("\n");
	}
	return 0;
}
