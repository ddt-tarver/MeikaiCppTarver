﻿// 練習1-3
// 文の終端を示すセミコロン;が欠如しているとどうなるか。
// プログラムをコンパイルして検証せよ。


#include <iostream>

int main()
{
	// 日本語では文の最後に。を置くのと同じで、
	// C++のプログラム文の末尾には;が必要になる
	// なかったらエラーになる
    std::cout << "Hello World!\n";
}