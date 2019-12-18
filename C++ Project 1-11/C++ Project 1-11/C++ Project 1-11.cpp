// 1 - 11 右に示すように、二つの実数値を読み込み、その合計と平均を求めて表示するプログラムを作成せよ。

#include "pch.h"
#include <iostream>

int main()
{
	// int型のxを生成する
	int x;
	// int型のyを生成する
	int y;
	// xの値を求める
	std::cout << "xの値:";
	// 数字をxに代入する
	std::cin >> x;
	// yの値を求める
	std::cout << "yの値:";
	// 数字をyに代入する
	std::cin >> y;
	// xとyを足した数を表示する
	std::cout << "合計は" << x + y << "です。" << std::endl;
	// xとyの平均を表示する
	std::cout << "平均は" << (x + y) / 2 << "です。";
}