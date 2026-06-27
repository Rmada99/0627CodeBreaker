#include "Input.h"
#include <stdio.h>

//数値入力
int i() {
    //入力を取得
    int input[4];

    for (int a = 0; a < 4; a++) {
        printf("%dつ目の数値：",a);
        scanf_s("%d", &input[a]);
        printf("入力値%d", input[a]);
    }
    //入力を返す
    return input[0,1,2,3];
}