#include<stdio.h>
void main(){
    int a[15] ={1,2,5,4,6,3,9,8,12,13,11,10,7,14};
    int sum =0;
    sum=(15*16)/2;
    int total =0;
    for(int i=0;i<14;i++){
        total = total + a[i];
    }
    printf("The missing value is : %d", sum-total);
}
