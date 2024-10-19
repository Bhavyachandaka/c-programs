#include<stdio.h>
#include<conio.h>
int main()
{
    int m,y,d;
    printf("Enter month");
    scanf("%d",&m);
    printf("Enter year");
    scanf("%d",&y);
    if (m<1||m>12)
    {
        printf("Invalid month\n");
        return 1;
    }
    switch (m)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            d = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            d = 30;
            break;
        case 2:
            if ((y%4==0&&y%100!=0)||(y%400==0))
            {
                d = 29;
            }
            else
            {
                d = 28;
            }
            break;
        default:
            d = 0;
    }

    printf("Number of days in month %d of year %d: %d\n", m, y, d);
    return 0;
}
