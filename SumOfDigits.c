#include<stdio.h>
void main(){
   int a;
   printf("enter a number");
   scanf("%d",&a);
   int sum =0;
   while(a>1){

    sum = sum + a%10;
    a = a/10;

   }
   printf("the sum of the digits is : %d" , sum);
}
