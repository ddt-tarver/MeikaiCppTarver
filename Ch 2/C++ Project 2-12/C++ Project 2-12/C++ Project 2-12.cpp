// 2-12
// List 2-13 と同様に、二つの整数値を読み込んで、小さいほうの値と大きいほうの値の
// 両方を表示するプログラムを作成せよ。ただし、二つの整数値が等しい場合は、
// 右に示すように「二つの値は同じです。」と表示すること。

#include "pch.h"
#include <iostream>

int main()
{
	// int型の変数を作成する
	int num1, num2, min, max;
	// 一つ目の整数を求める文を表示
	std::cout << "整数a: ";
	// 入力された値をnum1に入れる
	std::cin >> num1;
	// 二つ目の整数を求める文を表示 
	std::cout << "整数b: ";
	// 入力された値をnum2に入れる
	std::cin >> num2;
	// 入力された値が同じだった場合、表示する
	if (num1 == num2) {
		std::cout << "二つの値は同じです。";
		// num2がnum1より大きい場合
	} else if (num1 < num2) {
		// num1の値をminに導入する
		min = num1;
		// num2の値をmaxに導入する
		max = num2;
		// 小さい方の値を表示する
		std::cout << "小さい方の値は" << min << "です。";
		// 大きい方の値を表示する
		std::cout << "大きい方の値は" << max << "です。";
		// num2がnum1より大きい場合
	} else {
		// num2の値をminに導入する
		min = num2;
		// num1の値をmaxに導入する
		max = num1;
		// 小さい方の値を表示する
		std::cout << "小さい方の値は" << min << "です。";
		// 大きい方の値を表示する
		std::cout << "大きい方の値は" << max << "です。";
	}
}
