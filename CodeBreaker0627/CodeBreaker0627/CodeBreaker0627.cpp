#include<stdlib.h>
#include<time.h>
#include<stdio.h>
#include"Randam.h"
#include"Input.h"
#include"Result.h"
#include"Print.h"

struct Clear
{
    int hit;
    int blow;
};

int main()
{
    printf("コードブレイカー\n");
    printf("4桁の数字を入力してね\n");
    printf("\n");

    //生成した回答を取得
    int answer[4]= {a()};

    //デバッグ用
    printf("答え%d%d%d%d\n", answer[0],answer[1],answer[2],answer[3]);

    //正解まで繰り返す
    while (true)
    {

        //入力を取得
        int input[4] = { i() };
        printf("入力%d%d%d%d\n", input[0], input[1], input[2], input[3]);

        Clear clear = {};
        
         clear.hit, clear.blow = j(answer, input);

         printf("構造体ヒット：%d\n", clear.hit);
         printf("ブロー:%d\n", clear.blow);
        bool end= p(clear.hit,clear.blow);
        if (end) {
            break;
        }
    }

    return 0;
}
