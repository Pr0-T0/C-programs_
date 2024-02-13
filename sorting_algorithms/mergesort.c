#include<stdio.h>
#define max 5
int arr[max] = {4,5,2,7,3};
void merge(int start, int mid, int end){
    int temp[max];
    int i = start;
    int k = start;
    int j = mid + 1;
    while ((i <= mid) && (j <= end))
    {
        if(arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else   
            temp[k++] = arr[j++];
    }
    while (i <= mid)
        temp[k++] = arr[i++];
    while (j <= end)
        temp[k++] = arr[j++];
    for(i = start; i <= end; i++)
        arr[i] = temp[i];
}
void mergesort(int start, int end){
    int mid = 0;
    if(start != end){
        mid = (start + end)/ 2;    
        mergesort(start,mid);
        mergesort(mid+1,end);
        merge(start,mid,end);
    }
}
int main(){
    int i;
    int f;
    mergesort(0,4);
    for(i = 0; i <= 4; i++)
        printf("\t%d",arr[i]);
}
