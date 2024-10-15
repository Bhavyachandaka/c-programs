#include<stdio.h>
#include<conio.h>
void main()
{
    int a[14]={14,13,12,11,10,9,8,6,5,4,3,2,1};
    int sum=(14*15)/2;
    int tot=0;
    for(int i=0;i<13;i++)
    {
        tot=tot+a[i];
    }
    printf("the missing value is %d",sum-tot);
}
