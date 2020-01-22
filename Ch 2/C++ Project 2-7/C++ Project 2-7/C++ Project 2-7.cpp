// 2-7
// 二つの実数値を読み込んで、大きいほうの値を表示するプログラムを作成せよ。
// 

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
	// 数の大きい方を表示する
	std::cout << "大きい方の値は " << (num1 > num2 ? num1 : num2) << " です";

}
