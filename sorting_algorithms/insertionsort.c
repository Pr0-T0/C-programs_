#include<stdio.h>
#define max 5
int a[max] = {4,6,2,3,1};
void insertionsort(){
    int i = 0;
    int j = 0;
    int temp;
    for(i = 0; i <= max-1; i++){
        temp = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > temp)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }
}   
int main(){
    int i = 0;
    insertionsort();
    for(i = 0; i<= max-1; i++)
        printf("\t%d",a[i]);
    return 0;
}