#include<stdio.h>
struct student{
char name[20];
int roll;
int marks;
char address[20];
};
int main()
{
    int n,i;
    struct student s[20];
    printf("Enter the number of students");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the name roll marks and address of student %d\n",i+1);
       scanf("%s",&s[i].name);
       scanf("%d %d",&s[i].roll,&s[i].marks);
       scanf("%s",&s[i].address);
    }
    printf("The details of the students \n");
    for(i=0;i<n;i++)
    {
        printf("Name:-%s\t",s[i].name);
        printf("Roll:-%d\tMarks:-%d\t",s[i].roll,s[i].marks);
        printf("Address:-%s\n",s[i].address);

    }
    return 0;
}
