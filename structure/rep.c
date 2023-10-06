#include<stdio.h>
#include<stdlib.h>
#define max 10
struct pol{
    float c;
    int e;
}p[max+1];
void printpol(int t)
{
    int j;
    for(j = 0; j < t; j++)
    {
        if(p[j].c != 0)
        {
            if(p[j].e == p[0].e)
                printf("%.0fX^%d",p[j].c,p[j].e);
            else if(p[j].c == 1)
                printf("+X%d",p[j].e);
            else if(p[j].e == 1)
                printf("+%.0fX",p[j].e);
            else    
                printf("+%.0fX^%d",p[j].c,p[j].e);
        }
    }
}   

void readpol(int t)
{
    int i;
    for(i = 0; i < t; i++)
    {
        printf("Coefficient :");
        scanf("%f",&p[i].c);
        printf("Exponant :");
        scanf("%f",p[i].e);
    }
}

void main()
{
    int terms;
    printf("Enter the number of terms in polynomial :");
    scanf("%d",&terms);
    printf("Enter the coefficients starting from highest degree :\n");
    readpol(terms);
    printf("Polynomial :");
    printpol(terms);
}