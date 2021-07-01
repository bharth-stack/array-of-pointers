#include <stdio.h>
#include <stdlib.h>
struct a
{
    int b;
    struct a *c;
};
struct a * create()
{
    struct a *i,*j,*k;

   i=malloc(sizeof(struct a));
   scanf("%d",&i->b);
   i->c=NULL;
   j=i;

   while (k)
   {
       k=malloc(sizeof(struct a));
       scanf("%d",&k->b);
       k->c=NULL;
        if(k->b==-1)
        break;
       j->c=k;
       j=k;

   }

   return i;
}
void display(struct a *h)
{
      while(h!=NULL)
   {
       printf("%d ",h->b);
       h=h->c;
   }
}
void count(struct a *h)
{
    int d=0;
      while(h!=NULL)
   {
       d++;
       h=h->c;
   }
   printf("\n%d",d);
}
void sum(struct a *h)
{
     int d=0;
      while(h!=NULL)
   {
       d=d+h->b;
       h=h->c;
   }
   printf("\n%d",d);
}
void max(struct a *h)
{
    int i=0;
        while(h!=NULL)
   {
       if(h->b>i)
       {
           i=h->b;
       }
       h=h->c;
   }
   printf("\n%d",i);

}
void search(struct a *h,int j)
{

        while(h!=NULL)
   {
       if(h->b==j)
       {
           printf("\n%d is found",j);
           break;
       }
       h=h->c;
   }
   if(h==NULL)
   {
       printf("\n%d is not found",j);
   }


}
void insert(struct a *x,int o,int l)
{
    struct a *u;
    u=malloc(sizeof(struct a));
    u->b=o;

    for(int i=1;i<l;i++)
    {
        x=x->c;
    }

    u->c=x->c;
    x->c=u;

}

int main()
{
    struct a *h;
   h=create();
   display(h);
   count(h);
   sum(h);
   max(h);
   int i;
   printf("\nenter the number to be search ");
scanf("%d",&i);
search(h,i);
printf("\nenter the number to be inserted  ");
int g,k;
scanf("%d",&g);
printf("\nenter the posistion to be inserted");
scanf("%d",&k);
insert(h,g,k);
display(h);


}

