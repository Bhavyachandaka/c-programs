#include<stdio.h>
void main(){
    int a , b;
    printf("Enter the two numbers");
    scanf("%d %d" , &a ,&b);
    char op;
    printf("Enter the operator");
    scanf(" %c ", &op);
    switch(op)
    {
        case '+' : printf("the sum is  : %d " , a+b);
                  break;
        case '-' : printf("the differace is  : %d " , a-b);
                  break;
        case '*' : printf("the product is  : %d " , a*b);
                  break;
        case '/' : printf("the division is  : %d " , a/b);
                  break;
        case '%' : printf("the remainder is  : %d " , a%b);
                  break;
        default : printf("enter correct operator");
        
    }
}