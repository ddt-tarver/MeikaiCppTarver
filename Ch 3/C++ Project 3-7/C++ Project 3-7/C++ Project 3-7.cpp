// 3-7
// 右に示すように、正の整数値を読み込んで、その桁数を出力するプログラムを作成せよ。

#include <iostream>

int main() {
	// int型のbigNumを生成する
	int bigNum;
	// int型のcounterを生成する
	int counter = 1;
	// 整数を求める文
	std::cout << "正の整数値: ";
	// 入力値を代入
	std::cin >> bigNum;
	// bigNumが一桁以上の場合
	while (bigNum > 9) {
		// 10で割る
		bigNum = bigNum / 10;
		// カウントアップ
		counter++;
	}
	// 桁数を表示
	std::cout << counter;
	// 画面を表示
	do
	{

	} while (std::cin.get() != 'a');
	return 0;
}
