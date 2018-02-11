#include<stdio.h>
int main()
{
    int n,i=0,j;
    printf("Enter the length of List : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the numbers in the list : \n");
    while (i<n)
    {
        scanf("%d",&arr[i]);
        i++;
    }
    bubbleSort(arr,n);
}
void bubbleSort(int list[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(list[j]>list[j+1])
            {
                int temp=list[j];
                list[j]=list[j+1];
                list[j+1]=temp;
            }
        }
    }
    printf("Sorted Array : ");
    for(int i=0;i<n;i++)
    {
        printf(" %d ",list[i]);
    }
}
