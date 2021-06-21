#include<stdio.h>
#include<conio.h>
#include<string.h>

struct student
{
    char name[100];
   int roll_no[100],students;
};
struct no_of_students
{
    int students_count;
};
int countstu()
{
    int n;
    struct no_of_students a;
    printf("enter number of students=");
    scanf("%d",&a.students_count);

}
void printnames()
{
    struct student a[100];
    struct no_of_students b;
    for(int i=0;i<5;i++)
    {
        scanf("%s",&a[i].name);
    }
}
void printname()
{
    struct student a[100];

    for(int i=0;i<5;i++)
    {
        a[i].name=a[i+1].name;
        printf("%s",a[i].name);
    }

}
int main(){
    struct student a[100];
countstu();
printnames();
printname();

return 0;
}

