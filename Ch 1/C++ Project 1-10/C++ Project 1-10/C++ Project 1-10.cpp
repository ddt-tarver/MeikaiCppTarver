// 1-10 右に示すように、キーボードから読み込んだ整数値に10を加えた値と10を減じた値を出力するプログラムを作成せよ。

#include "pch.h"
#include <iostream>

int main()
{
	// int型の整数を生成
	int tenChecker;
	// 整数値を求める
	std::cout << "整数値:";
	// 入力値を代入する
	std::cin >> tenChecker;
	// 10を足した数を表示
	std::cout << "10を加えた値は" << tenChecker + 10 << "です。" << std::endl;
	// 10を引いた数を表示
	std::cout << "10を減じた値は" << tenChecker - 10 << "です。" << std::endl;
}