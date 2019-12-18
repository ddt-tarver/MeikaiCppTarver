// 1-12　右に示すように、三角形の底辺と高さを読み込んで、その面積を表示するプログラムを作成せよ。

#include "pch.h"
#include <iostream>

int main()
{
	// Double型の底辺を生成
	double length;
	// Double型の高さを生成
	double height;
	// 説明を画面に表示
    std::cout << "三角形の面積を求めます。\n";
	// 底辺を求める文を表示
	std::cout << "底辺：";
	// 底辺の値を代入
	std::cin >> length;
	// 高さを求める文を表示
	std::cout << "高さ：";
	// 高さの値を代入
	std::cin >> height;
	// 三角形の面積を表示
	std::cout << "面積は" << (length * height)/2 << "です。";
}

