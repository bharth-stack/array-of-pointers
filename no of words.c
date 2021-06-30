
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char a[10]="bharath";
int i,j=1;

    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' '&&a[i+1]!=' ')
            j++;
    }
    printf("%d",j);

    return 0;
}
