#include<stdio.h>
void main(){
  
  int a;
  int count =0 ;
  printf("enter a value for a : ");
  scanf("%d", &a);
  for (int i =2 ; i < a; i++){
    if(a%i == 0 ){
      count++;
    }
  }
  if(count == 0){
    printf("the given number is prime %d" , a);

  }else{
    printf("the given number is composite %d", a);
  }
}
