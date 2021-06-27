#include <stdio.h>
#include <stdlib.h>
struct sin
{
    int i;
    int j;

};
struct sin* fun(int b)
{
    struct sin *c;
    c=(struct sin*)malloc(b*sizeof(struct sin));

    return c;
}
int main()
{
    struct sin *a;
    int c;
    scanf("%d",&c);
    a=fun(c);
    for(int i=0;i<c;i++)
    {
        scanf("%d",&a[i].i);
    }
     for(int i=0;i<c;i++)
    {
        printf("%d",a[i].i);
    }

}
