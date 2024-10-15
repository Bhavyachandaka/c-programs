#include<stdio.h>
void main(){

    int a[30];
    int len;
    printf("Enter the length of the array : \n");
    scanf("%d",&len);
    printf("Enter the values : \n");
    for(int i=0;i<len;i++){
        scanf("%d",&a[i]);

    }
    int max =a[0];
    for(int i=1 ;i<len;i++){
        if(max<a[i]){
            max = a[i];
        }
    }
    printf("The max value of the array is : %d " , max);


}
