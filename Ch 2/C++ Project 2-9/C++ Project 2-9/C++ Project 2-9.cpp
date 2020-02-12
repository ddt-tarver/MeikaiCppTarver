// 2-9
// 右に示すように、二つの整数値を読み込んで、
// それらの値の差が10以下であれば「それらの差は10以下です。」と表示し、
// そうでなければ「それらの差は11以上です。」と表示するプログラムを作成せよ。

#include "pch.h"
#include <iostream>

int main()
{
	// 変数aを生成
	int a;
	// 変数bを生成
	int b;
	// 比較に使用する変数cを生成し、10の値を入れる
	int c = 10;
	// aの値を求める文を表示
	std::cout << "整数A : ";
	// 入力された値をaに入れる
	std::cin >> a;
	// bの値を求める文を表示
	std::cout << "整数B : ";
	// 入力された値をbに入れる
	std::cin >> b;
	// aとbの差をcと比較する
	if (abs(a - b) <= c) {
		// aとbの差が10以下の場合、表示する
		std::cout << "それらの差は10以下です。";
	} else {
		// aとbの差が11以上の場合、表示する
		std::cout << "それらの差は11以上です。";
	}
}
