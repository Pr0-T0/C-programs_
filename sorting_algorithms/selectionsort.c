#include<stdio.h>
#define max 5
int a[max] = {4,6,1,3,8};
void swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp; 
}
void selectionsort(){
    int i,j;
    for(i = 0; i <= max-2; i++){
        for(j = i+1; j <= max-1; j++){
            if(a[i] > a[j])
                swap(&a[i],&a[j]);
        }
    }
}
int main(){
    int i = 0;
    selectionsort();
    for(i = 0; i<= max-1; i++)
        printf("\t%d",a[i]);
    return 0;
}