#include "Print.h"
#include<stdio.h>
int p(int hit ,int blow) {
	printf("ヒット：%d\n", hit);
	printf("ブロー:%d\n", blow);

	if (hit == 4) {
		return(true);
	}

	return(false);
}