#include<stdioar.h>
#include<string.h>
#include<conio.h>
int main()
{
    int b;
    char a[10][10];
    printf("enter number of names");
    scanf("%d",& b);
    printf("enter all names");
    for(int i=0;i<b;i++)
    {
        scanf("%s",a[i]);
    }
    printf("the length are");
    for(int i=0;i<b;i++)
    {
        printf("\n no %d . %s",i+1,a[i]);
    }
}
