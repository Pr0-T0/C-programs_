#include<stdio.h>
void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}
int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i = low - 1;

    for(int j = low; j <= high -1; j++){
        if(arr[j] < pivot){
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);

}
void quicksort(int arr[], int low, int high){
    if(low < high){
        int p = partition(arr, low, high);
        quicksort(arr, low, p - 1);
        quicksort(arr, p + 1, high);
    }
}
int main(){
    int a[5] = {4,7,2,1,3};
    quicksort(a,0,4);
    for(int i = 0; i <= 4; i++){
        printf("\t%d",a[i]);
    }
    return 0;
}