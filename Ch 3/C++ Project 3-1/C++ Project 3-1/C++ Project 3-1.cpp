// 3-1
// �ǂݍ��񂾐����l�̕����𔻒肷��List 2-5 ���A�D���Ȃ������x�ł����́E�\����
// �J��Ԃ���悤�ɂ����v���O�������쐬����B

#include "pch.h"
#include <iostream>

int main()
{	
	// int�^�̐���n�𐶐�
	int n;
	// �������[�v���J�n
	while (true) {
		// ���������߂镶
		std::cout << "�����l: ";
		// ���͂��ꂽ�l��n�ɑ������
		std::cin >> n;
		// n�̒l��0���傫���ꍇ
		if (n > 0) {
			std::cout << "���̒l�͐��ł��B" << std::endl;
			// n�̒l��0��菭�Ȃ��ꍇ
		} else if (n < 0) {
			std::cout << "���̒l�͕��ł��B" << std::endl;
		}
		// n�̒l���̏ꍇ
		else
			std::cout << "���̒l��0�ł��B" << std::endl;
	}
}