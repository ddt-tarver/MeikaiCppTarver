// 1-13 以下に示すプログラムを作成せよ。
// 1桁の正の整数値（すなわち1以上9以下の値）をランダムに生成して表示。
// 1桁の負の整数値（すなわち-9以上-1以下の値）をランダムに生成して表示。
// 2桁の正の整数値（すなわち10以上99以下の値）をランダムに生成して表示。

#include "pch.h"
#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
	// 乱数の種を設定
	srand(time(NULL));
	// 1以上9以下のランダム整数を作成
	int num1 = rand() % 9 + 1;
	// ランダム整数num1を表示
	std::cout << num1 << std::endl;
	// -9以上-1以下のランダム整数を作成
	int num2 = rand() % 10 - 10;
	// ランダム整数num2を表示
	std::cout << num2 << std::endl;
	// 10以上99以下のランダム整数を作成
	int num3 = rand() % 90 + 10;
	// ランダム整数num3を表示
	std::cout << num3; 
}
