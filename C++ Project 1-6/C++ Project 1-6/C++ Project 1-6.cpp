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
	// xに40を代入
	x = 40;
	// yに19を代入
	y = 19;
	// x割るyの結果を画面に表示し、int型は整数値しか扱えないことを証明する
	std::cout << x / y << std::endl;
}
