// 練習 1-2
// List 1-1 のプログラムからusing 指令を削除して、cout をstd::cout に変更した
// プログラムを作成せよ。


#include <iostream>

// using namespace std;

int main()
{
	// using namespace std (standard)を使用すると
	// stdを必要とするcout や cinはstdを使用せずに
	// 使えますが、using namespace stdがないばあい、
	// std::coutとして書く必要がある。
	
	// クオーテーションマークの後の文字を表示する 
	std::cout << "初めてのC++プログラム。\n";
	// クオーテーションマークの後の文字を表示する
	std::cout << "画面に出力しています。\n";


}
