#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
  char a[100];
  printf("enter sentence");
  gets(a);
  int count=0;
  for(int i=0;i<strlen(a);i++)
  {
     if(a[i]==' '&&a[i+1]!=' ')
       {
          count=count+1;
       }
   }
    printf("the number of words is %d",count+1);
}
