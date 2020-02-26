// 3-4
// List 3-4のwhile文終了時にxの値が-1になることを確認できるように書きかえたプログラムを作成せよ。 

#include <iostream>

int main() {
	// int型のcountDownを生成
	int countDown;
	// カウントダウンを始める文を表示する
	std::cout << "カウントダウンします。\n";
	// do 文を始める
	do {
		// 整数値を求める文を表示する
		std::cout << "正の整数値: ";
		// 入力された数字をcountDownに代入する
		std::cin >> countDown;
		// 入力された数字が正の値である事を確認
	} while (countDown <= 0);
	// countDownの現在の値が-1以下ではないことを確認
	while (countDown >= -1) {
		// countDownの数字を表示
		std::cout << countDown << "\n";
		// countDownの数字をデクリメントする
		countDown--;
	}
}


