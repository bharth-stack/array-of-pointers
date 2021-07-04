#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
   char str[100],giv[20],up[20];
   int i,j=0,k,a[20],l,m,n=0;
   printf("enter the sentence:");
   gets(str);
   printf("enter the word to be changed:");
   scanf("%s",up);
   printf("enter the new word:");
   scanf("%s",giv);
   if(strlen(up)>strlen(giv))
   {
       m=strlen(up)-strlen(giv);

   }
   else if(strlen(up)<strlen(giv))
   {
       m=strlen(giv)-strlen(up);

   }
   for( i=0;i<strlen(str);i++)
   {
        for(k=0;k<strlen(up);k++)
        {
        if(str[i]==up[j])
        {

            a[j]=i;
            j++;
            i++;
        }
        else
        {
            j=0;
            break;
        }
        }
        if(j==strlen(up)&& j==strlen(giv)&&str[i]==' '||str[i]=='\0')
        {
            for(l=0;l<strlen(up);l++)
            {
                str[a[l]]=giv[l];
            }
        }
       else if(j==strlen(up)&&strlen(giv)<strlen(up)&&str[i]==' ')
       {
         for(l=0;l<strlen(giv);l++)
         {
             str[a[l]]=giv[l];
         }
          for(l=a[strlen(giv)-1]+1;l<strlen(str);l++)
           {

               str[l]=str[l+m];
           }

       }
       else if(j==strlen(up)&&strlen(giv)>strlen(up)&&str[i]==' ')
       {
           for(l=strlen(str);l>a[strlen(up)-1]+m;l--)
           {

              str[l]=str[l+m];
              printf("%c",str[l])
           }
         for(l=a[0];l<a[strlen(a)-1]+m;l++)
         {
             str[l]=giv[n];
             n++;
         }

       }
   j=0;

   }
   for( i=0;i<strlen(str);i++)
    printf("%c",str[i]);
    printf("%c",str[7]);

}


