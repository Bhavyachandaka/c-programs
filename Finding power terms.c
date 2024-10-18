#include<stdio.h>
int pow(int n,int m);
int result=1;
int pow(int n,int m)
{
    while(m==0)
    {
        return result;
    }
 result=result*n;
 pow(n,m-1);
 return result;
}
int main()
{
    int b,e;
    printf("enter the base\n");
    scanf("%d",&b);
    printf("enter the exponent\n");
    scanf("%d",&e);
    printf("the result %d \n",pow(b,e));
    return 0;
}
