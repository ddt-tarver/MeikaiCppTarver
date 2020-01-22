// 2-13
// 二つの整数値を読み込んで降順(大きい順)に並びかえるプログラムを作成せよ。

#include "pch.h"
#include <iostream>

int main()
{
	// int型の整数を作成する
	int bigNum, smallNum, tmp;
	// 一つ目の入力を求める文
	std::cout << "一つ目の整数を入力してください ";
	// 入力値をbigNumにいれる
	std::cin >> bigNum;
	// 二つ目の入力を求める文
	std::cout << "二つ目の整数を入力してください ";
	// 入力値をsmallNumにいれる
	std::cin >> smallNum;
	// bigNumの値がsmallNumより大きい場合
	if (bigNum >= smallNum) {
		// 大きい値のbigNumを表示する
		std::cout << "大きい値は:" << bigNum << std::endl;
		// 小さい値のsmallNumを表示する
		std::cout << "小さい値は:" << smallNum;
	} else {
		// 大きい値を一時的にtmpに代入する
		tmp = smallNum;
		// 小さい値をsmallNumに代入する
		smallNum = bigNum;
		// 一時的に保存していた大きい値をbigNumに代入する
		bigNum = tmp;
		// 大きい値のbigNumを表示する
		std::cout << "大きい値は:" << bigNum << std::endl;
		// 小さい値のsmallNumを表示する
		std::cout << "小さい値は:" << smallNum;
	}
}
