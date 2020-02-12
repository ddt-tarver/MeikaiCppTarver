// 2-11
// キーボードから読み込んだ三つの整数の中央値を求めて表示するプログラムを作成せよ。

#include "pch.h"
#include <iostream>

int main()
{
	// 三つの変数を作成
	int num1, num2, num3;
	// 入力された値をnum1に入れる
	std::cin >> num1;
	// 入力された値をnum2に入れる
	std::cin >> num2;
	// 入力された値をnum3に入れる
	std::cin >> num3;
	// num1が中央値の場合、表示する
	if ((num1 <= num2) && (num1 >= num3) || (num1 <= num3) && (num1 >= num2)) {
		std::cout << num1;
	}
	// num2が中央値の場合、表示する
	else if ((num2 <= num1) && (num2 >= num3) || (num2 <= num3) && (num2 >= num1)) {
		std::cout << num2;
	}
	// 中央値がnum1でもnum2でもない場合、num3を表示する
	else {
		std::cout << num3;
	}
}
