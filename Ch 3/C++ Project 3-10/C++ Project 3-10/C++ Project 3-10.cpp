// 3-10
// 全問とは逆に、0から正の整数値までカウントアップするプログラムを作成せよ。

#include <iostream>

int main() {

	// int型のcountUpを生成
	int countUp;
	// 整数値を求める
	std::cout << "整数値を入力してください : ";
	// 入力された値をcountUpに代入
	std::cin >> countUp;
	// loop用のintを生成
	int i = 0;
	do {
		// 数字を表示する
		std::cout << i << std::endl;
		// iの値をカウントアップ
		i++;
	} while (i < countUp + 1);
	// 画面を止める処理
	do
	{

	} while (std::cin.get() != 'a');
	return 0;
}