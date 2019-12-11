// 1-10 右に示すように、キーボードから読み込んだ整数値に10を加えた値と10を減じた値を出力するプログラムを作成せよ。

#include "pch.h"
#include <iostream>

int main()
{
	int a;

	std::cout << "整数値:";

	std::cin >> a;

	std::cout << "10を加えた値は" << a + 10 << "です。" << std::endl;

	std::cout << "10を減じた値は" << a - 10 << "です。" << std::endl;
}