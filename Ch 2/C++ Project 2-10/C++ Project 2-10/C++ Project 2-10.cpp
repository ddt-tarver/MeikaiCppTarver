// 2-10 
// キーボードから読み込んだ三つの整数の最小値を求めて表示するプログラムを作成せよ。

#include "pch.h"
#include <iostream>

int main()
{
	// 三つの整数を生成する
	int num1, num2, num3;
	// 入力された値をnum1に入れる
	std::cin >> num1;
	// 入力された値をnum2に入れる
	std::cin >> num2;
	// 入力された値をnum3に入れる
	std::cin >> num3;
	// min をnum1で初期化する
	int min = num1;
	// num2がminより低い場合、num2の値をminに代入する
    if (num2 < min) {
        min = num2;
    }
	// num3がminより低い場合、num3の値をminに代入する
    if (num3 < min) {
        min = num3;
    }
	// 最小値を表示する
	std::cout << "最小値は " << min << "です。";
	
}
