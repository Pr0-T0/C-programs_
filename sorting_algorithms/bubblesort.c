#include<stdio.h>
void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp; 
}
int main(){
    int a[5] = {10,3,6,2,5};
    int i,j;
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4 - i; j++){
            if(a[j] > a[j+1]){
                swap(&a[j], &a[j+1]);
            }
        }
    }
    printf("Sorted array :\n");
    for(i = 0; i <= 4; i++){
        printf("\t%d",a[i]);
    }
    return 0;
}