// 3-1
// 読み込んだ整数値の符号を判定するList 2-5 を、好きなだけ何度でも入力・表示を
// 繰り返せるようにしたプログラムを作成せよ。

#include "pch.h"
#include <iostream>

int main()
{	
	// int型の整数nを生成
	int n;
	// 無限ループを開始
	while (true) {
		// 整数を求める文
		std::cout << "整数値: ";
		// 入力された値をnに代入する
		std::cin >> n;
		// nの値が0より大きい場合
		if (n > 0) {
			std::cout << "その値は正です。" << std::endl;
			// nの値が0より少ない場合
		} else if (n < 0) {
			std::cout << "その値は負です。" << std::endl;
		}
		// nの値がの場合
		else
			std::cout << "その値は0です。" << std::endl;
	}
}