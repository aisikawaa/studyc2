#include <stdio.h>

void main(){
    int a;
    printf("数値を入力:");
    scanf("%d",&a);
    if(a > 5){
        printf("入力した値は、５より大きいです。\n");
    }else{
        printf("入力した値は、５より小さいです。\n");
    }
}