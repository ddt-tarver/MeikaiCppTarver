// 練習 1-6
// List 1-7 のプログラムを変更して、小数部をもつ実数値をxやyに代入するプログラムを作成せよ。
// その実行結果から、int型変数が整数値のみしか扱えないことを確認すること。

#include "pch.h"
#include <iostream>

int main()
{
	// int型のxを作成
	int x;
	// int型のyを作成
	int y;
	// xに2.5を代入
	x = 2.5;
	// yに1.1を代入
	y = 1.1;
	// int型には少数値を代入できないので、少数値が切り落とされる
    // よってx/y の答えは2÷1 = 2となる
	std::cout << x / y << std::endl;
}

