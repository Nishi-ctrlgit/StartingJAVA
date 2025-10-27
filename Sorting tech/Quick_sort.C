#include<stdio.h>
int f(int arr[],int low,int high){
    int pivot=arr[low];
    int i=low;
    int j=high;
    int temp=0;
    while(i<j){
        while(arr[i]<=pivot&&i<=high)
        {
            i++;
        }
        while(arr[j]>pivot&&j>=low)
        {
            j--;
        }
        if(i<j){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;}
    }temp = arr[low];
arr[low] = arr[j];
arr[j] = temp;
    return j;
}
void quick_sort(int arr[],int low,int high)
{
    if(low<high)
    {
        int PIndex=f(arr,low,high);
        quick_sort(arr,low,PIndex-1);
        quick_sort(arr,PIndex+1,high);
    }
}

int main(){
int arr[100];
int n;
  printf("Enter number of elements: ");
    scanf("%d", &n);
printf("Enter elements of array\n");
for(int i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}

quick_sort(arr,0,n-1);

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
return 0;
}

