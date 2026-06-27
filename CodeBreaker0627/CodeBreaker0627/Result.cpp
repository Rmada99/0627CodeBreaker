#include "Result.h"
#include <stdio.h>
//比較
int j(int answer[], int input[]) {
    //比較処理
    int hit = 0;
    int blow = 0;

    //比較
    for (int i = 0; i < 4; i++) {
        //ヒットの処理
        printf("%d=%d\n", answer[i], input[i]);
        if (answer[i] == input[i]) {
            printf("ヒット！\n");


            hit += 1;
        }
        else {

            for (int f = 0; f < 4; f++) {
                //ブローの処理
                if (answer[f] == input[i]) {
                    printf("ブロー！\n");

                    blow += 1;
                }
            }
        }
    }

    printf("ヒット：%d\n", hit);
    printf("ブロー:%d\n", blow);

    return(hit, blow);
}