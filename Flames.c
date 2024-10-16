#include<stdio.h>
#include<string.h>
void main(){

    char boy[20];
    char girl[20];
    printf("Enter the name of the boy : ");
    gets(boy);
    printf("Enter the name of the girl : ");
    gets(girl);
    int len1 = strlen(boy);
    int len2 = strlen(girl);
    for(int i=0;i<len1;i++){
        for(int j=0;j<len2;j++){
            if(boy[i]==girl[j]){
                boy[i]='_';
                girl[j]='_';

            }
        }
    }
    int boyletters=0,girlletters=0,totalletters=0;
    for(int i=0;i<len1;i++){
        if(boy[i]!='_'){
            boyletters++;
        }
    }
     for(int i=0;i<len2;i++){
        if(girl[i]!='_'){
            girlletters++;
        }
    }
    totalletters=boyletters+girlletters;
    switch(totalletters){

        case 1: printf("Friend");
                break;
        case 2: printf("Love");
                break;
        case 3: printf("Affection");
                break;
        case 4: printf("Marriage");
                break;
        case 5: printf("Enemy");
                break;
        case 6: printf("Sister");
                break;
        case 7: printf("Friend");
                break;
        case 8: printf("Love");
                break;
        case 9: printf("Affection");
                break;
        case 10: printf("Marriage");
                break;
        case 11: printf("Enemy");
                break;
        case 12: printf("Sister");
                break;
        default: printf("Enter small names");
                break;
    }

}
