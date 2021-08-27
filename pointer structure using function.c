// program that passes a pointer to a structure to a function
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct student
{
    int r_no;
    char name[20];
    char course[20];
    int fees;
}student;
void display(struct student *);
int main()
{
    struct student *ptr;

    ptr = (struct student*)malloc(sizeof(struct student));
    printf("\n Enter the data of the student: ");
    printf("\n Roll no: ");
    scanf("%d",&ptr->r_no);
    printf("\n Name: ");
    getchar();
    gets(ptr->name);
    printf("\n Course: ");
    gets(ptr->course);
    printf("\n Fees: ");
    scanf("%d",&ptr->fees);

    display(ptr);
    getch();
    return 0;
}

void display(struct student *ptr)
{
    printf("\n Details of student: ");
    printf("\n Roll no: %d",ptr->r_no);
    printf("\n Name : %s",ptr->name);
    printf("\n Course : %s",ptr->course);
    printf("\n Fees: %d",ptr->fees);
}
