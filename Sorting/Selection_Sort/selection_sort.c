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
    selectionSort(arr,n);
    return 0;
}
void selectionSort(int list[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min_index=i;
        for(int j=i+1;j<n;j++)
        {
            if(list[j]>list[min_index])
            {
                min_index=j;
            }
        }
        int temp=list[i];
        list[i]=list[min_index];
        list[min_index]=temp;
    }
    printf("Sorted Array : ");
    for(int i=0;i<n;i++)
    {
        printf(" %d ",list[i]);
    }
}
