// 3-6
// 読み込んだ値の個数だけ記号文字を表示するプログラムを作成せよ。
// +と-を交互に表示すること。 

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
		// +を表示する
		std::cout << '+';
		// iのカウンターをカウントアップする
		i++;
		// iの値がcounterより低いか確認
		if (i < counter) {
			// -を表示
			std::cout << '-';
			// iをカウントアップ
			i++;
			continue;
		}
	}

	// 今の画面を表示する
	do
	{

	} while (std::cin.get() != 'a');
	return 0;
}