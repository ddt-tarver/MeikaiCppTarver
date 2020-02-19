// 3-3
// 右に示すように、二つの整数値を読み込んで、小さいほうの数以上で大きいほうの数以下の全整数を、
// 小さいほうから順に表示するプログラムを作成せよ。

#include "pch.h"
#include <iostream>

int main()
{
	// 少ない方の数の変数を生成する
	int lowNum;
	// 大きい方の数の変数を生成する
	int highNum;
	// 小さい方の数を求める文
	std::cout << "小さい数を入力してください" << std::endl;
	// 入力された値を代入する
	std::cin >> lowNum;
	//大きい方の数を求める文
	std::cout << "大きい数を入力してください" << std::endl;
	// 入力された値を代入する
	std::cin >> highNum;
	// 小さな数から大きい数まで表示するループ
	for (lowNum; lowNum < (highNum + 1); lowNum++)
	{
		// 
		std::cout << lowNum << " ";
	}

}


