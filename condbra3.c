#include <stdio.h>

void main(){
    int dice;
    printf("１から６までの数値を入力してください。:");       //サイコロの目を入力
    scanf("%d",&dice);
    //値がサイコロの目の範囲内か調べる
    if(1 <= dice && dice <=6){
        //  骰子の目が偶数か、奇数で処理を分ける
        if(dice == 2 || dice == 4 || dice == 6){
            printf("丁です。\n");  //偶数ならば丁
        }else{
            printf("半です。\n");  //奇数ならば半
        }
    }else{
        printf("範囲外の値です。\n");
    }
}