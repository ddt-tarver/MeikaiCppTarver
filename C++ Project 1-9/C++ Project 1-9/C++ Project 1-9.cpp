// 1-9 右に示すように、キーボードから読み込んだ整数値をそのまま反復して表示するプログラムを作成せよ。

#include "pch.h"
#include <iostream>

int main()
{
	// int型のyを生成
	int myInput;
	// 整数値を求める文字を表示
	std::cout << "整数値:";
	// ユーザーからのインプットをyに読み込む
	std::cin >> myInput;
	// ユーザーが入力したyとその後を続く文字を画面に表示する
	std::cout << myInput << "と入力しましたね。"; 
}

