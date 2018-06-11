#include<stdio.h>
int main()
{
    int n;
    printf("Enter the length of array :");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the numbers to be sorted :\n");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    mergeSort(arr,0,n-1);
    printf("Sorted Array is : ");
    for(int i=0;i<n;i++)
    {
        printf(" %d ",arr[i]);
    }
}
void mergeSort(int arr[],int low,int high)
{
    if(low<high)
    {
        int mid=(low+high)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}
void merge(int arr[],int l,int m,int h)
{
    int i,j,k;
    int n1=m-l+1;
    int n2=h-m;
    int L[n1];
    int R[n2];
    for(i=0;i<n1;i++)
    {
        L[i]=arr[l+i];
    }
    for(i=0;i<n2;i++)
    {
        R[i]=arr[m+1+i];
    }
    i=0;
    j=0;
    k=l;
    while(i<n1 && j<n2)
    {
        if(L[i]<=R[j])
        {
            arr[k]=L[i];
            i++;
        }
        else
        {
            arr[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        arr[k]=L[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        arr[k]=R[j];
        j++;
        k++;
    }
}
