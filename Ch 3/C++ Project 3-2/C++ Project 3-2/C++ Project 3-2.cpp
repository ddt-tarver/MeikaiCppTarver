// 3-2 
// 2�������l(10~99)�𓖂Ă�����s�����ăQ�[���t���쐬����B

#include "pch.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

int main()
{
	// 10~99�̃����_���Ȑ����l�𐶐�����
	int ranNum = (rand() % 90) + 10;
	// ���͂��ꂽ�l���ꎞ�I�ɕۑ�����ϐ��𐶐�
	int guessNum;
	// �Q�[�����I��������Ƃ��m�F����bool�𐶐�
	bool gameOver = false;
	// �Q�[���̎n�߂�\����
	std::cout << "0~99�̐��𓖂ĂĂ��������B" << std::endl;
	// gameOver�ɂȂ��ĂȂ��ꍇ
	while (!gameOver) {
		// ���������߂镶
		std::cout << "�������ȁH�H" << std::endl;
		// ���͂��ꂽ�l��������
		std::cin >> guessNum;
		// ���͂��ꂽ�l��������̐����傫���ꍇ
		if (guessNum > ranNum) {
			std::cout << "�����Ə����Ȑ�����B" << std::endl;
		}
		// ���͂��ꂽ�l��������̐���菬�����ꍇ
		else if (guessNum < ranNum) {
			std::cout << "�����Ƒ傫�Ȑ�����B" << std::endl;
		}
		//�@���͂��ꂽ�l�������̏ꍇ
		else {
			// gameOver��bool��true�ɕϊ�����
			gameOver = true;
		}
	}
	std::cout << "�����ł��I";
}

