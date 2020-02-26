// 3-8
// 読み込んだ値が１未満であれば改行文字を出力しないように、List3-10を
// 書き換えたプログラムを作成せよ。

#include <iostream>

int main() {
    // int型のstarNumを生成
	int starNum;
	// 文字を表示
	std::cout << "何個*を表示しますか : ";
    // 入力された数字をstarNumに代入する
	std::cin >> starNum;
    // starNumの数が0より大きい場合
	for (int i = 0; i < starNum; i++) {
	    // 星を表示する
		std::cout << '*';
	}
    // 星の数が1以上の場合
	if (starNum > 0) {
	    // 改行を行う
		std::cout << '\n';
	}
    // 画面を止める処理
	do
	{

	} while (std::cin.get() != 'a');
	return 0;
}