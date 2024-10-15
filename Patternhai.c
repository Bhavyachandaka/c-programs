#include<stdio.h>
void main(){

  int a ;
  printf("Enter the range you want to print the pattern: \n");
  scanf("%d",&a);
  for(int i=1;i<a;i++){
    for(int j=1;j<i;j++){
        for(int k=1;k<j;k++){

                printf(" HAI ");

        }
         printf("\n");
    }

  }
}
