#include <stdio.h>

void main(){
    int a,b;        //変数a,b(キーボードからの値)
    int add,sub,multi,dev,surp;    //四則演算を定義

    printf("a=");       //キーボードからの入力を促す
    scanf("%d",&a);     //キーボードから一文字入力
    printf("b=");
    scanf("%d",&b);

    add = a + b;
    sub = a - b;
    multi = a *b;
    dev = a / b;
    surp = a % b;

    printf("%d + %d = %d\n",a,b,add);
    printf("%d - %d = %d\n",a,b,sub);
    printf("%d * %d = %d\n",a,b,multi);
    printf("%d / %d = %d\n",a,b,dev);
    printf("%d %% %d = %d\n",a,b,surp);
}