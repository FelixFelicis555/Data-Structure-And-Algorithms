#include<stdio.h>
int main()
{
    int n,i=0,j;
    printf("Enter the length of List : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the numbers of list : \n");
    while(i<n)
    {
        scanf("%d",&arr[i]);
        i++;
    }
    insertionSort(arr,n);
    return 0;
}
void insertionSort(int list[],int n)
{
    int i,j;
    for(i=1;i<n;i++)
    {
        j=i-1;
        int key=list[i];
        while(j>=0 && list[j]>key)
        {
            list[j+1]=list[j];
            j=j-1;
        }
        list[j+1]=key;
    }
     printf("Sorted Array : ");
    for(i=0;i<n;i++)
    {
       printf(" %d ",list[i]);
    }
}
