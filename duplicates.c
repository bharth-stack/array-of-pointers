#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10];
    int i,j,k=1,l=1,m;
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }

     for(i=0;i<m;i++)
     {

         if(a[i]==0)
         {
            k++;

         }
     }
     if(k>2)
     {
          printf("the duplicate num is 0 rpeated %d times\n",k-1);
          k=1;
     }
     k=1;

    for(i=0;i<m;i++)
    {
        for(j=i+1;j<m;j++)
        {
            if(a[i]==a[j]&&a[i]>0)
            {
                k++;
                a[j]='\0';

            }
            else if(a[i]<0&&a[i]==a[j])
            {
                k++;
                a[j]='\0';
            }

        }
        if(k>1)
        {
            printf("the duplicate num is %d epeated %d times\n",a[i],k);
            k=1;
            l=2;
        }
    }
    if(l==1){
        printf(" no duplicates\n");
    }
    else{
        printf("duplicates are present");
}
    return 0;
}
