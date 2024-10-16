#include<stdio.h>
void main(){
    int a,sum;
    sum=0;
    printf("Enter the numbers : \n");
    while(1){
        scanf("%d",&a);
        if(a==0){
            break;
        }
        sum = sum+a;
    }
    printf("The Total of the values is : %d ",sum);


}
