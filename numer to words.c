#include <stdio.h>
#include <stdlib.h>
int count (int a)
{
    int d=0;
    while(a>0)
    {
        a=a/10;
        d++;
    }
    return d;
}
int main()
{
 int s,t,l,m,n,o,k;
 printf("enter the number:");
 scanf("%d",&s);
t=s;

l=count(s);
while(s>0)
{
m=count(s);
if(m==1)
    n=1;
if(m==2)
    n=10;
if(m==3)
    n=100;
if(m==4)
    n=1000;
if(m==5)
    n=10000;
if(m==6)
    n=100000;
if(m==7)
    n=1000000;
if(m==8)
    n=10000000;
o=s%n;
k=s/n;
s=o;

if(m==1){
  switch (k)
    {
        case 1:printf(" one");
        break;
        case 2:printf(" two");
        break;
        case 3:printf(" three");
        break;
        case 4:printf(" four");
        break;
        case 5:printf(" five");
        break;
        case 6:printf(" six");
        break;
        case 7:printf(" seven");
        break;
        case 8:printf(" eight");
        break;
        case 9:printf(" nine");
        break;
        default :printf("zero");
        break;
    }
}
if(m==2){
  switch (k)
    {
        case 1:
            {
m=count(s);
if(m==1)
    n=1;
if(m==2)
    n=10;
o=s%n;
k=s/n;
s=o;
switch (k)
{
        case 1:printf(" eleven ");
        break;
        case 2:printf(" twelve");
        break;
        case 3:printf(" thirteen ");
        break;
        case 4:printf(" fourteen ");
        break;
        case 5:printf(" fifteen");
        break;
        case 6:printf(" sixteen ");
        break;
        case 7:printf(" seventeen ");
        break;
        case 8:printf(" eighteen ");
        break;
        case 9:printf(" nineteen ");
        break;
        case 0 :printf("ten ");
        break;
              }
            }

        break;
        case 2:printf("  twenty");
        break;
        case 3:printf("  thirty");
        break;
        case 4:printf("  fourty");
        break;
        case 5:printf("  fifty");
        break;
        case 6:printf("  sixty");
        break;
        case 7:printf("  seventy");
        break;
        case 8:printf("  eightty");
        break;
        case 9:printf("  ninety");
        break;
        default :printf("zero");
        break;

    }
}
if(m==3){
  switch (k)
    {
        case 1:printf(" one hundred and");
        break;
        case 2:printf(" two hundred and");
        break;
        case 3:printf(" three hundred and");
        break;
        case 4:printf(" four hundred and");
        break;
        case 5:printf(" five hundred and");
        break;
        case 6:printf(" six hundred and");
        break;
        case 7:printf(" seven hundred and");
        break;
        case 8:printf(" eight hundred and");
        break;
        case 9:printf(" nine hundred and");
        break;
        default :printf("zero hundred and");
        break;

    }
}
if(m==4){
  switch (k)
    {
        case 1:printf("one thousand");
        break;
        case 2:printf(" two thousand");
        break;
        case 3:printf(" three thousand");
        break;
        case 4:printf(" four thousand");
        break;
        case 5:printf(" five thousand");
        break;
        case 6:printf(" six thousand");
        break;
        case 7:printf(" seven thousand");
        break;
        case 8:printf(" eight thousand");
        break;
        case 9:printf(" nine thousand");
        break;
        default :printf("zero thousand");
        break;

    }
}
if(m==5){
  switch (k)
    {
        case 1:
            {
m=count(s);
if(m==1)
    n=1;
if(m==2)
    n=10;
if(m==3)
    n=100;
if(m==4)
    n=1000;
if(m==5)
    n=10000;
    o=s%n;
k=s/n;
s=o;
switch (k)
{
        case 1:printf(" eleven thousand");
        break;
        case 2:printf(" twelve thousand");
        break;
        case 3:printf(" thirteen thousand");
        break;
        case 4:printf(" fourteen thousand");
        break;
        case 5:printf(" fifteen thousand");
        break;
        case 6:printf(" sixteen thousand");
        break;
        case 7:printf(" seventeen thousand");
        break;
        case 8:printf(" eighteen thousand");
        break;
        case 9:printf(" nineteen thousand");
        break;
        case 0 :printf("ten thousand");
        break;
              }
            }

        break;
        case 2:printf(" twenty");
        break;
        case 3:printf(" thirty");
        break;
        case 4:printf(" fourty");
        break;
        case 5:printf(" fifty");
        break;
        case 6:printf(" sixty");
        break;
        case 7:printf(" seventy");
        break;
        case 8:printf(" eightty");
        break;
        case 9:printf(" ninety");
        break;
        default :printf("zero");
        break;

    }
}
}
if(l>1)
printf(" rupees");
else
printf(" rupee");
return 0;
}
