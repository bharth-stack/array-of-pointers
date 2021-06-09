#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int fun()
{
    int a;
    printf("length of the array:");
    scanf("%d",&a);
    return a;
}
    int fun1(int a )
    {
        int *p;
    p=(int*)malloc(a*sizeof(int));
    for(int i=0;i<a;i++)
    {
        scanf("%d",&p[i]);
    }
    return p;
}
int fun2(int *b,int a)
{
   for(int n=0;n<a;n++)
   {
       printf("%d",b[n]);
   }
}

int main()
{
int a,*b,c;
a=fun();
b=fun1(a);
c=fun2(b,a);
return 0;
}
