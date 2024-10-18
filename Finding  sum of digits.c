#include<stdio.h>
void main(){
   int a;
   printf("enter a number");
   scanf("%d",&a);
   int sum =0;
   sum = Sum(a,sum);
   printf("the sum of the digits is : %d" , sum);
}
void Sum(int a, int sum){
    if(a>1){
         sum = sum + a%10;
         a = a/10;
         return Sum(a,sum);

    }
    return 0;

}
