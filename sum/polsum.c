#include<stdio.h>
#include<stdlib.h>
#define max 10
int f_terms,s_terms;


struct pol{
    float c;
    int e;
}p1[max+1],p2[max+1],result[max+1];

void readpol(struct pol p[max+1],int n)
{
    int i;
    for(i = n-1; i >= 0; i--)
    {
        printf("coefficient : ");
        scanf("%f",&p[i].c);
        printf("Exponent : ");
        scanf("%d",&p[i].e);
    }
}
void printpol(struct pol p[max+1],int n)
{
    int j;
    for(j = n -1; j >= 0; j--)
    {
        if(p[j].c != 0)
        {
            if(p[j].e == p[n-1].e)
                printf("%.0fX^%d",p[j].c,p[j].e);
            else if(p[j].e == 0)
                printf(" + %.0f",p[j].c);
            else if(p[j].e == 1)
                printf(" + %.0fX",p[j].c);
            else    
                printf(" + %.0fX^%d",p[j].c,p[j].e);
        }
    }
}
void sum(struct pol p1[max+1],struct pol p2[max+1],int t1,int t2)
{
    int i = 0,j = 0,k = 0;
    while (i < t1 && j < t2)
    {
        if(p1[i].e == p2[j].e)
        {
            result[k].c = p1[i].c + p2[j].c;
            result[k].e = p1[i].e;
            i++;
            j++;
            k++;
        }
        else if(p1[i].e < p2[j].e)
        {
            result[k].c = p1[i].c;
            result[k].e = p1[i].e;
            i++;
            k++;
        }
        else 
        {
            result[k].c = p2[j].c;
            result[k].e = p2[j].e;
            j++;
            k++; 
        }
    }
     while (i < t1)
        {
            result[k].c = p1[i].c;
            result[k].e = p1[i].e;
            i++;
            k++;
        }
        while (j < t2)
        {
            result[k].c = p2[j].c;
            result[k].e = p2[j].e;
            j++;
            k++;
        }
    printf("\n");
    printpol(result,k);
}
void main()
{
    int max_terms;
    printf("Enter the number of terms in the first polynomial :");
    scanf("%d",&f_terms);
    printf("Enter the coefficients and exponant starting from the highest degree : \n");
    readpol(p1,f_terms);

    printf("Enter the number of terms in the second polynomial :");
    scanf("%d",&s_terms);
    printf("Enter the coefficients and exponant starting from the highest degree : \n");
    readpol(p2,s_terms);

    printf("First polynomial : ");
    printpol(p1,f_terms);
    printf("\n");
    printf("Second polynomial : ");
    printpol(p2,s_terms);
    printf("\n");

    printf("Sum of polynomials : ");

    
    sum(p1,p2,f_terms,s_terms);

}