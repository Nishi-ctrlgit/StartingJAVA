#include <stdio.h>
void merge(int arr[],int low,int mid,int high)
{
    int temp[100];
    int i=0;
int left=low;
int right=mid+1;
while(left<=mid && right<=high)//If you were using C++ STL vector, you could write:But since this is pure C, there is no .add() or .push_back() —
//so you do this manually using array indexing and incrementing.
{
    if(arr[left]<=arr[right]){
        temp[i++]=arr[left];//In C, arrays are just fixed memory blocks, not dynamic containers like vector in C++.
                            //So temp[i] + arr[left] just performs arithmetic addition, not element insertion.
        left++;
        
    }
    else{
    temp[i++]=arr[right];
    right++;
    }
}
while(left<=mid){
    temp[i++]=arr[left];
    left++;
}
while(right<=high){
    temp[i++]=arr[right];
    right++;
}
for(int i=low;i<=high;i++)
{
    arr[i]=temp[i-low];
}
}
int mid;
void merge_sort(int arr[],int low,int high) {
    if(low==high)return;
    int mid=(low+high)/2;
    merge_sort(arr,low,mid);
    merge_sort(arr,mid+1,high);
    merge(arr,low,mid,high);
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

merge_sort(arr, 0, n - 1);

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
return 0;
}
