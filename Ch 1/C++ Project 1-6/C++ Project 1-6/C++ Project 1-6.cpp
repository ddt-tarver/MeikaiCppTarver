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
	// xに24.98を代入
	x = 24.98;
	// yに2.5を代入
	y = 2.5;
	// int型は整数値のみしか扱えないので、結果には少数部は表示されない
	std::cout << x / y << std::endl;
}
