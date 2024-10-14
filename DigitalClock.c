#include<stdio.h>
void main(){
    int h=0;
    int s=0;
    int m=0;
    while(1){
        printf(" %02d : %02d : %02d ", h, m,s);
        sleep(1);
        system("cls");
        s = s+1;
        if(s==60){
            s =0 ;
            m = m+1;

        }
        else if(m == 60){
            s=0;
            m=0;
            h=h+1;
        }
        else if (h==12){
            s=0;
            m=0;
            h=0;
        }
    }
}
