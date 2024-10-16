#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
    char pass[20];
    printf("enter password");
    scanf("%s",pass);
    int l=strlen(pass);
    int up=0,lw=0,dg=0,sp=0;
    if(l>8)
    {
        for(int i=0;i<1;i++)
        {
            if(isupper (pass[i]))
            up++;
            else if(islower (pass[i]))
            lw++;
            else if(isdigit (pass[i]))
            dg++;
            else
            sp++;
        }
        if(up>0 && lw>0 && dg>0 && sp>0)
        printf("STRONG PASSWORD");
        else
        printf("WEEK PASSWORD");
    }
    else
    printf("WEEK DUE LESS CHARACTER");
}



