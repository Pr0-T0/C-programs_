#include<stdio.h>
#define max 10
void main()
{
    int matrix1[10][10],matrix2[max][max];
    int m1,n1,m2,n2,i,j;
    int count1,count2;
    printf("Enter the number of rows and columns :");
    scanf("%d%d",&m1,&n1);

    printf("Enter the elements of first matrix :");
    for(i = 0; i < m1; i++)
    {
        for(j = 0; j < n1; j++)
        {
            scanf("%d",&matrix1[i][j]);
            if(matrix1[i][j] != 0)
            {
                count1++;
            }
        }
    }
    printf("Enter the number of rows and columns of second matrix :");
    scanf("%d%d",&m2,&n2);

    printf("Enter the elements of second matrix :");
        for(i = 0; i < m2; i++)
    {
        for(j = 0; j < n2; j++)
        {
            scanf("%d",&matrix2[i][j]);
            if(matrix2[i][j] != 0)
            {
                count2++;
            }
        }
    }
}