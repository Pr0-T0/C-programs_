#include<stdio.h>
#include<stdlib.h>
#define max 10
void main()
{
    float pol[max+1];
    int d,i,j;
    printf("Enter Degree of polynomial :");
    scanf("%d",&d);
    if(d < 1)
    {
        printf("Degree should be atleast one!");
        exit(0);
    }
    else
    {
        printf("Enter coefficients of polynomial :");
        for(j = d; j >= 0; j--)
        {
            scanf("%f",&pol[j]);
        }
    }
    printf("Polynomial : ");
    for(i = d; i >= 0; i--)
    {
        if(pol[i] != 0)
        {
            if(i == d)
                printf("%.2fx^%d",pol[i],i);
            else if(i == 0)
                printf("+%.2f",pol[i]);
            else if(i == 1)
                printf("+%.2fx",pol[i]);
            else 
                printf("+%.2fx^%d",pol[i],i);
        }
    }
}