// 1-8 int型の変数に実数値の初期化子を与えるとどうなるか。プログラムを作成して確認せよ。

#include "pch.h"
#include <iostream>

int main()
{
	// int型のxを生成する
	int x;
    // xに78の初期化子を代入する
    x = 78;
	// xの値を確認する為に画面に表示する
	std::cout << x << std::endl;
}