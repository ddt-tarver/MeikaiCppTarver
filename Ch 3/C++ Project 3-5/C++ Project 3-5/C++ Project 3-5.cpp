// 3-5 
// 読み込んだ値が1未満であれば改行文字を出力しないように
// List3-6を書きかえたプログラムを作成せよ。

#include <iostream>

int main() {
	// int型のcounterを生成する
	int counter;
	// 文を表示する
	std::cout << "何個を表示しますか: ";
	// inputをcounterに入れる
	std::cin >> counter;
	// int型のiを生成
	int i = 0;
	// iの値がcounterより低いか確認
	while (i < counter) {
		// 星を表示する
		std::cout << '*';
		// iのカウンターをカウントアップする
		i++;
	}
	// 今の画面を表示する
	do
	{

	} while (std::cin.get() != 'a');
	return 0;
}