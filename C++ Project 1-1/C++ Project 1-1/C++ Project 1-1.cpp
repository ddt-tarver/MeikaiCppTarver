// 問題 1-1 
// ヘッダ<iostream>をインクルードする指令が欠如していると、どうなるであろうか。
// プログラムをコンパイルして検証せよ。

// #include <iostream>

// iostream は 入出力を行う為に必要な情報が入っているので、
// iostreamをincludeしなかったら、coutをしようとする時にエラーが発生します。

#include <iostream>

using namespace std;

int main()
{

	cout << "初めてのC++プログラム。 \n";
	cout << "画面に出力しています。\n";


}
