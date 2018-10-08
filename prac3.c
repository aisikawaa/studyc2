#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
    int n;
    srand((unsigned)time(NULL));
    n = rand() % 100+ 1;
    printf("数値：%d\n",n);
    if(n <= 10){
        printf("数値は10以下か、90以上です。\n");
    }else if(n >= 90){
        printf("数値は10以下か、90以上です。\n");
    }else{
        printf("数値は10以上か、90以下です。\n");
    }
}