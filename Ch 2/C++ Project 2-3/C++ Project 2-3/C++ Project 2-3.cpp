// 2-3
// 二つのint型変数a,b に値を読み込んで、その大小関係を以下のいずれかで表示するプログラムを作成せよ。
// 『aのほうが大きいです。』『bのほうが大きいです。』『aとbは同じ値です。』

#include "pch.h"
#include <iostream>

int main()
{
	// int型のaとbを生成する
	int a, b;
	// aの値を求める
	std::cout << "aの値:";
	// 入力された値をaに代入する
	std::cin >> a;
	// bの値を求める
	std::cout << "bの値:";
	// 入力された値をbに代入する
	std::cin >> b;
	// aの方が大きい場合の文を表示する
	if (a > b) {
		std::cout << "aのほうが大きいです。";
	// bの方が大きい場合の文を表示する
	} else if (b > a) {
		std::cout << "bのほうが大きいです。";
	// aとbが同じの場合の文を表示する
	} else {
		std::cout << "aとbは同じ値です。";
	}
}
