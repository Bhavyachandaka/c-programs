#include<stdio.h>
void main(){

int a[5][6] = {
{1,2,3,4,5,6},
{7,8,9,10,11,12},
{13,14,15,16,17,18},
{19,20,21,22,23,24},
{25,26,27,28,29,30}

};
int row = sizeof(a)/sizeof(a[0]);
int col = sizeof(a[0])/sizeof(a[0][0]);
int top =0;
int left=0;
int right = col-1;
int bottom = row-1;
while(top<=bottom && left<=right){

    for(int i=left;i<=right;i++){
        printf("%d ", a[top][i]);
    }top++;
     for(int i=top;i<=bottom;i++){
        printf("%d ", a[i][right]);
    }right--;
    if(bottom>=top){
         for(int i=right;i>=left;i--){
        printf("%d ", a[bottom][i]);
    }bottom--;
    }
    if(right>=left){
         for(int i=bottom;i>=top;i--){
        printf("%d ", a[i][left]);
    }left++;
    }


}

}
