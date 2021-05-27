#include<stdio.h>
#include<conio.h>
struct student
{
    char name[50];
    int roll;
    char dob[10];
    int classs;
    char sec[5];
    char village[20];
};
int no_of(){
    int a;
    printf("enter the no of students=");
    scanf("%d",&a);
    return a;
}
int names(int a)
{
    struct student b[100];
    for(int i=0;i<a;i++)
    {
        printf("enter the student name:");
        scanf("%s",b[i].name);
    }
}
int roll(int a)
{
    struct student b[100];
    for(int i=0;i<a;i++)
    {
        printf("enter the student rollno:");
        scanf("%d",&b[i].roll);
    }

}
int dob(int a)
{
    struct student b[100];
    for(int i=0;i<a;i++)
    {
        printf("enter the student dob(d-m-y):");
        scanf("%s",b[i].dob);
    }

}
int lasss(int a)
{
    struct student b[100];
    for(int i=0;i<a;i++)
    {
        printf("enter the student class(1-10):");
        scanf("%d",&b[i].classs);
    }

}
int sec(int a)
{
    struct student b[100];
    for(int i=0;i<a;i++)
    {
        printf("enter the student sec:");
        scanf("%s",b[i].sec);
    }

}
int village(int a)
{
    struct student b[100];
    for(int i=0;i<a;i++)
    {
        printf("enter the student village:");
        scanf("%s",b[i].village);
    }

}
/* this function need to be edited */
int order(int a)
{
    struct student b[100];

printf("==============================================================================================\n");
printf("||name          ||rollno  || dob  || class  ||sec  ||village          ||\n");
printf("==============================================================================================\n");

    for(int i=0;i<a;i++){
printf("\n|%s|%d\t|%s\t|%d\t|%s\t|%s",b[i].name,b[i].roll,b[i].dob,b[i].classs,b[i].sec,b[i].village);
    }
}


int main()
{
int a,b;
a=no_of();
names(a);
roll(a);
dob(a);
lasss(a);
sec(a);
village(a);
order(a);
return 0;
}

