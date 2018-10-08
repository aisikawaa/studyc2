#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
    int n;
    srand((unsigned)time(NULL));
    n = rand() % 4 + 1;
    switch(n){
        case 1:
            printf("グー\n");
            break;
        case 2:
           printf("パー\n");
           break;
        case 3:
            printf("チョキ\n");
            break;
        default:
            printf("ジャンケンポイっと出すバカがいる\n");
            break;
    }
}