#include<stdio.h>
#include<stdlib.h>
#define max 10
int terms;
struct pol{
    float c;
    int e;
}p[max+1];




void main()
{
    
    printf("Enter the number of terms in polynomial :");
    scanf("%d",&terms);
    printf("Enter the coefficients starting from highest degree :\n");
    readpol();
    printf("Polynomial :");
    printpol();
}