#include "Randam.h"
#include<time.h>
#include<random>
#include<array>
#include<iostream>

//ƒ‰ƒ“ƒ_ƒ€’Š‘I
int a() {

    std::random_device rd;
    std::mt19937 mt(rd());

    std::uniform_int_distribution<int>dist(1, 9);

    std::array<int, 4>answer;

    for (int i = 0; i < 4; ++i) {
        answer[i] = dist(mt);
    }

    for (int value : answer) {
        std::cout << value << "";
    }
    std::cout << std::endl;




    //¶¬‚µ‚½“š‚¦‚ð•Ô‚·
    return  answer[0], answer[1], answer[2], answer[3] ;
}
