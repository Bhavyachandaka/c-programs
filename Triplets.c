#include<stdio.h>
void main(){

  int a ;
  printf("Enter the range you want to find triplets : \n");
  scanf("%d",&a);
  for(int i=1;i<a;i++){
    for(int j=1;j<i;j++){
        for(int k=1;k<j;k++){
            if(j*j+k*k==i*i){
                printf(" %d %d %d \n", k,j,i);
            }
        }
    }
  }
}
