#include<stdio.h>
void main(){
    int a ;
    printf("Enter a number to find its factors :");
    scanf("%d",&a);
    for(int i =2 ;i<a;i++){
        if(a%i == 0){
            printf("%d\n",i);

        }
    }

}
