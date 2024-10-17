#include<stdio.h>
#include<conio.h>
void star(int n);
void hash(int n);
void star(int n)
{
    int i=n,j;
    for(int i=n;i>=1;i--)
   {
       for(int j=1;j<=i;j++)
       {
           printf("*");
       }
       printf("\n");
   }
}
void hash(int n)
{
    int i=n,j;
    for(int i=n;i>=1;i--)
   {
       for(int j=1;j<=i;j++)
       {
           printf("#");
       }
       printf("\n");
   }
}
int main()
{
   int a,b;
   printf("number of rows");
   scanf("%d",&a);
   printf("what kind of pattern you want");
   printf("1.star pattern\n 2.hash pattern ");
   scanf("%d",&b);
   if(b==1)
   {
       star(a);
   }
   else
    {
       hash(a);
    }
   return 0;
}

