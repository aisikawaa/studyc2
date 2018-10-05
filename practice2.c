#include <stdio.h>

void main(){
    int a,b;        //変数a,b(キーボードからの値)
    int multi;    //四則演算を定義

    printf("長方形の幅:");       //キーボードからの入力を促す
    scanf("%d",&a);     //キーボードから一文字入力
    printf("長方形の長さ:");
    scanf("%d",&b);

    multi = a *b;

    printf("長方形の面積は%dｍ２です。\n",multi);

}