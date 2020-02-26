// 3-2 
// 2桁整数値(10~99)を当てさせる《数当てゲーム》を作成せよ。

#include "pch.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

int main()
{
	// 10~99のランダムな整数値を生成する
	int ranNum = (rand() % 90) + 10;
	// 入力された値を一時的に保存する変数を生成
	int guessNum;
	// ゲームが終わったことを確認するboolを生成
	bool gameOver = false;
	// ゲームの始めを表す文
	std::cout << "0~99の数を当ててください。" << std::endl;
	// gameOverになってない場合
	while (!gameOver) {
		// 整数を求める文
		std::cout << "いくつかな？？" << std::endl;
		// 入力された値を代入する
		std::cin >> guessNum;
		// 入力された値が当たりの数より大きい場合
		if (guessNum > ranNum) {
			std::cout << "もっと小さな数だよ。" << std::endl;
		}
		// 入力された値が当たりの数より小さい場合
		else if (guessNum < ranNum) {
			std::cout << "もっと大きな数だよ。" << std::endl;
		}
		//　入力された値が正解の場合
		else {
			// gameOverのboolをtrueに変換する
			gameOver = true;
		}
	}
	std::cout << "正解です！";
}

