// 2-2
// List 2-5 の最後の else を、else if (n==0)に変換するとどうなるかを検証せよ。 

#include "pch.h"
#include <iostream>

using namespace std;

// この場合だとelseと(n==0)は同じ結果となる

int main()
{
	// int型の整数を生成する
	int n;
	// 整数を求める表示
	cout << "整数値:";
	// 記入値をnに代入する
	cin >> n;
	// 整数が0以上の場合の表示
	if (n > 0)
		cout << "その値は正です。\n";
	// 整数が0以下の場合の表示
	else if (n < 0)
		cout << "その値は負です。\n";
	// 整数が0の場合の表示
	else if (n == 0)
		cout << "その値は0です。\n";

}
