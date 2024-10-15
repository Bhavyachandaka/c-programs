#include<stdio.h>
void main(){

    int lower_bound,upper_bound;
    printf("Enter the lower bound of the primes : \n");
    scanf("%d",&lower_bound);
    printf("Enter the upper bound of the primes: \n");
    scanf("%d",&upper_bound);
    int count;
    for(int i=lower_bound;i<=upper_bound;i++){
        count=0;
        for(int j=2;j<i;j++){
            if(i%j==0){
                count++;
            }
        }
        if(count==0){
            printf("%d  ",i);
        }
    }

}
