#include <stdio.h>
#include <stdlib.h>
struct queue
{
    struct queue *f;
    struct queue *r;
    int a;
    struct queue *l;


};
struct queue * create()
{
 struct queue *p;
 p=malloc(sizeof(struct queue));
 printf("enter the value ");
 scanf("%d",&p->a);
 p->l=p->r=NULL;
 p->f=NULL;
   return p;
}
struct queue* enqueue( struct queue *p,int j)
{
 struct queue *q;
    q=malloc(sizeof(struct queue));
    q->a=j;
    p->l=q;
  ->l=NULL;

  return p;
}
void display(struct queue *p)
{
    //struct queue *q;
    while (p)
    {
        printf("%d",p->a);
        p=p->l;
    }
}
int main()
{
    struct queue *h;
    h=create();
    h=enqueue(h,2);
    h=enqueue(h,3);
   /* h=enqueue(h,7);
    h=enqueue(h,4);
    h=enqueue(h,5);
    h=enqueue(h,9);*/
    display(h);
    return 0;
}
