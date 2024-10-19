#include<stdio.h>
#include<conio.h>
#include<string.h>
struct marks
{
    int telugu;
    int maths;
    int science;
};
struct details
{
    char name[20];
    int rollno;
    struct marks s2[20];
}s1[20];
void main()
{
    int n;
    printf("how many details");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
       printf("\n enter the name:  ");
       scanf("%s",s1[i].name);
       printf("\n enter the roll number :  ");
       scanf("%d",&s1[i].rollno);
       printf("\n enter the telugu marks:  ");
       scanf("%d",&s1[i].s2[i].telugu);
       printf("\n enter the maths marks:  ");
       scanf("%d",&s1[i].s2[i].maths);
       printf("\n enter the science marks:  ");
       scanf("%d",&s1[i].s2[i].science);
    }
    for(int i=0;i<n;i++)
    {
       printf("%s\n",s1[i].name);
       printf("%d\n",s1[i].rollno);
       printf("%d\n",s1[i].s2[i].telugu);
       printf("%d\n",s1[i].s2[i].maths);
       printf("%d\n",s1[i].s2[i].science);
    }
}
