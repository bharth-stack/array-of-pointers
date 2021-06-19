

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],i,large=-1,j,k,l,m=0,o;

    printf("enter how many numbers:");
    scanf("%d",&i);
    printf("enter largest number u want:");
    scanf("%d",&j);
    for(k=0;k<i;k++){
        scanf("%d",&a[k]);
    }

    for(k=0;k<j;k++)
    {
        for(l=0;l<i;l++)
        {
            if(a[l]!=large){
                if(a[l]>m){
                    m=a[l];
                    o=l;
                }
            }

        }
        large=m;
        a[o]=0;
        m=0;
    }
    printf(" %d nd largest number is %d",j,large);
    return 0;
}
