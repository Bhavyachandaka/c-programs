#include<stdio.h>
#include<conio.h>
void main()
{
    int a[3][3];
    int b[3][3];
    int c[3][3];
    printf("enter elements of 1st matrix");
    for(int i=0;i<=2;i++)
        {
            for(int j=0;j<=2;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("enter elements for 2nd matrix");
        for(int i=0;i<=2;i++)
        {
            for(int j=0;j<=2;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        printf("===========first matrix===========");
        printf("\n");
        for(int i=0;i<=2;i++)
        {
            for(int j=0;j<=2;j++)
            {
                scanf("  %d",a[i][j]);
            }
        }
     printf("===========second matrix===========");
        printf("\n");
        for(int i=0;i<=2;i++)
        {
            for(int j=0;j<=2;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        printf("\n");
        for(int i=0;i<=2;i++)
        {
            for(int j=0;j<=2;j++)
            {
                c[i][j]=a[i][j]+b[i][j];
            }
        }
        printf(" the sum ofmatrix is");
        for(int i=0;i<=2;i++)
        {
            for(int j=0;j<=2;j++)
            {
                scanf("%d",&c[i][j]);
            }
            printf("\n");
        }
}
    
