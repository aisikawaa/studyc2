#include <stdio.h>

void main(){
    int num;
    printf("１〜３までの値を入力してください。:");
    scanf("%d",&num);
    if(num == 1){
        printf("one\n");
    }else if(num == 2){
        printf("two\n");
    }else if(num == 3){
        printf("three\n");
    }else{
        printf("不適切な値です。\n");
    }
}