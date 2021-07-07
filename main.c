#include <stdio.h>
#include <stdlib.h>
void bubble (int a[],int b)
{
    int f=0,i,j,k=0;
     for(i=0;i<b-1;i++)
     {
          for(j=0;j<b-1-i;j++)
          {
              if(a[j]>a[j+1])
              {
               k=a[j];
               a[j]=a[j+1];
               a[j+1]=k;
                  f=1;
              }
          }
          if(f==0)
            break;
     }

}
int main()
{
   int a[10],i;
   for(i=0;i<10-1;i++)
   {
       scanf("%d\n",&a[i]);
   }
   bubble(a,10);
  for(i=0;i<10;i++)
   {
       printf("%d\n",a[i]);
   }
    return 0;
}
