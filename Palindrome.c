#include<stdio.h>
#include<string.h>
void main()
{
    char a[10]="ccvtydtv";
    int length=strlen(a);
    for(int i=0,j=length-1;i<=j;i++,j--)
    {
        if(a[i]!=a[j])
        {
            printf("it is not a palindrome");
            return;
        }
    }
    printf("it is a palindrome");
}
