// 2-1
// 右に示すように、整数値を読み込んで、その絶対値を求めて表示するプログラムを作成せよ。

#include "pch.h"
#include <iostream>

int main()
{
	// int型の整数を生成する
	int num;
	// 整数を求める
	std::cout << "整数値 : ";
	// 入力値をnumに代入する
	std::cin >> num;
	// num値が負の場合、その数を二回足して正に変更する
	if (num < 0) {
		num -= (num + num);
	}
	// 修正後のnumを表示する
	std::cout << "その絶対値は" << num << "です。";
}
