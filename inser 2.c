#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[4][4],i,j,k,row,column,num;
    for(i=0;i<4;i++)
    {
         printf("\n");
        for(j=0;j<4;j++)
            scanf("%d",&A[i][j]);
    }
     for(i=0;i<4;i++)
    {
         printf("\n");
        for(j=0;j<4;j++)
            printf("%d",A[i][j]);
    }
    printf("enter row =");
    scanf("%d",&row);
    printf("enter column");
    scanf("%d",&column);
    printf("enter the num");
    scanf("%d",&num);

     for(i=row;i<=row;i++)
    {
         printf("\n");
        for(j=4-1;j>column;j--)
            A[i][j]=A[i][j];

    }
    A[i][j]=num;

     for(i=0;i<4;i++)
    {
         printf("\n");
        for(j=0;j<4;j++)
            printf("%d",A[i][j]);
    }
    return 0;
}
