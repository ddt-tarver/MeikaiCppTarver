// 1-14
// キーボードから読み込んだ整数値プラスマイナス5の範囲の整数値をランダムに生成して表示するプログラムを作成せよ。
// ※キーボードから読み込んだ値が100であれば、95~105の整数値を表示すること。

#include "pch.h"
#include <ctime>
#include <cstdlib>
#include <iostream>


int main()
{
	// 乱数の種を設定
	srand(time(NULL));
	// int型のnumを生成
	int num;
	// int型のランダム整数±5を生成
	int randomNum = rand() % 11 - 5;
	// 整数値を求める
	std::cout << "整数値:";
	// 入力数をnumに代入する
	std::cin >> num;
	// 入力数とランダム整数を足した数を画面に表示する
	std::cout << "その値の±5の乱数を生成しました。それは" << num + randomNum << "です。";
}