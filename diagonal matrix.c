#include <stdio.h>
#include <stdlib.h>
struct matrix
{
    int *arr;
    int n;
};
int create (struct matrix *a)
{
     a->arr=(int*)malloc(a->n*sizeof(int));

}
int set (struct matrix a,int i,int j,int k)
{
    a.arr[i]=k;

}
int get(struct matrix a,int i,int j)
{
    if(i==j)
        printf("\n%d",a.arr[i]);
        else
            printf("in valid");
}
int modify(struct matrix *a,int i,int j,int k)
{
    if(i==j)
        a->arr[i]=k;

}
int display (struct matrix *a)
{
    int i,j,k;
    for(i=1;i<=a->n;i++)
    {
        for(j=1;j<=a->n;j++)
        {
            if(i==j)
                printf(" %d ",a->arr[i]);
            else
                printf(" 0 ");
        }
        printf("\n");
    }
}

int main()
{
    struct matrix a;
    printf("enter the size of matrix:");
    scanf("%d",&a.n);
    int i,j,k,l,b;
    printf("**************select menu****************");
    printf("\n     1.create=%d",b=1);
    printf("\n     2.set=%d",b=2);
    printf("\n     3.get=%d",b=3);
    printf("\n     4.modify=%d",b=4);
    printf("\n     5.display=%d\n",b=5);
    printf("\n     6.terminate=%d\n",b=6);
    do{
    printf("\nenter the case:\n");
    scanf("\n%d",&b);
    switch(b)
    {
    case 1:
    create(&a);
    break;
    case 2:
    for(i=1;i<=a.n;i++)
    {
    for(j=1;j<=a.n;j++)
    {
    if(i==j)
    {
    printf("enter the value:");
    scanf("%d",&k);
    set(a,i,j,k);
    }
    }
    }
    break;
    case 3:
    printf("enter the row");
    scanf("%d",&i);
    printf("enter the column");
    scanf("%d",&j);
    get(a,i,j);
    break;
    case 4:
    printf("\nenter the row to modify");
    scanf("%d",&i);
    printf("\nenter the column to modify");
    scanf("%d",&j);
    printf("\nenter the number ");
    scanf("%d",&k);
    modify(&a,i,j,k);

    break;
    case 5:
    display(&a);
    default :printf("exit");
    break;
    }

}while(b!=5);

}
