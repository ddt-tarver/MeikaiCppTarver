// 1-8 int型の変数に実数値の初期化子を与えるとどうなるか。プログラムを作成して確認せよ。

#include "pch.h"
#include <iostream>

int main()
{
	// 2.5をint型の変数の生成時に初期化する
	int x = 2.5;
	// int型は実数値が入らないので、2のみが表示される
	std::cout << x << std::endl;
}