// 3-9
// 正の整数値を0までカウントダウンするList3-4をfor文で実現せよ。

#include <iostream>

int main() {
	// int型の整数を生成
	int countDown;
	// 整数値を求める
	std::cout << "整数値を入力してください :";
	// 入力された値をcountDownに代入
	std::cin >> countDown;
	// countDownの値が-1より大きい場合
	for (int i = -1; i < countDown; countDown--)
	{
		// 数字を表示する
		std::cout << countDown << std::endl;
	}
	// 画面を止める処理
	do
	{

	} while (std::cin.get() != 'a');
	return 0;
}