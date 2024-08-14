// Structure student having rollno name  marks remarks as members. Assume appropriate type and size of member.
// Structure to read and display the data given by user.
// Use upper question to read and display red of 10 students.

#include<stdio.h>
struct std{
    char name[50];
    int rollno;
    int matks;
};
void main()
{
    struct std s[10];
    for (int i=0;i<10;i++)
    {
        printf("Enter the name of student: ");
        gets(s[i].name);
        printf("\nEnter roll no: ");
        scanf("%d",&s[i].rollno);
        printf("\nEnter the marks: ");
        scanf("%d",&s[i].marks);
        getchar();
    }
    for(int i=0;i<11;i++)
    {
        printf("\nName of student: ");
        puts(s[i].name);
        printf("\nroll no.: %d",s[i].rollno);
        printf("\n Marks.: %d",s[i].marks);
    }
}
