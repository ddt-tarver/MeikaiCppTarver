// 1-7 三つのint型変数に位を代入し、それらの合計と平均を求めるプログラムを作成せよ。

#include "pch.h"
#include <iostream>

int main()
{
	// int型のa,b,cを作成し、それぞれに数字を代入する
	int a = 1, b = 2, c = 3;
	// a,b,cを足した合計を表示する
	std::cout << (a + b + c) << std::endl;
	// a,b,cの平均を表示する
	std::cout << (a + b + c)/3 << std::endl;
}
