#include <stdio.h>
void main(){
    int a,b ;
    int big;
    printf("enter number1 : ");
    scanf("%d" , &a);
    printf("enter Number 2 : ");
    scanf("%d ", &b );
    big = a>b?a:b;
    int step = big;
    while(1){
        if(big%a == 0 && big%b == 0){
            printf("The LCM is %d " , big);
            break;
        }
        else {
            big = big+step ;
        }
        
    }
}