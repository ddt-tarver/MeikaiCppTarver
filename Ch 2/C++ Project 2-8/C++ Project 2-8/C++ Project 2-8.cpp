// 2-8
// 二つの整数値を読み込んで、それらの値の差を表示するプログラムを作成せよ。

#include "pch.h"
#include <iostream>

int main()
{
	// int型の整数を生成する
	int num1;
	// int型の整数を生成する
	int num2;
	// 入力値をnum1に代入する
	std::cin >> num1;
	// 入力値をnum2に代入する
	std::cin >> num2;
	// 入力値の差を表示する
	std::cout << "値の差は " << (num1 > num2 ? num1 - num2 : num2 - num1) << " です。";
}
