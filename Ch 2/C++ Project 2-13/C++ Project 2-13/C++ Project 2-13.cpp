// 2-13
// ��̐����l��ǂݍ���ō~��(�傫����)�ɕ��т�����v���O�������쐬����B

#include "pch.h"
#include <iostream>

int main()
{
	// int�^�̐������쐬����
	int bigNum, smallNum, tmp;
	// ��ڂ̓��͂����߂镶
	std::cout << "��ڂ̐�������͂��Ă������� ";
	// ���͒l��bigNum�ɂ����
	std::cin >> bigNum;
	// ��ڂ̓��͂����߂镶
	std::cout << "��ڂ̐�������͂��Ă������� ";
	// ���͒l��smallNum�ɂ����
	std::cin >> smallNum;
	// bigNum�̒l��smallNum���傫���ꍇ
	if (bigNum >= smallNum) {
		// �傫���l��bigNum��\������
		std::cout << "�傫���l��:" << bigNum << std::endl;
		// �������l��smallNum��\������
		std::cout << "�������l��:" << smallNum;
	} else {
		// �傫���l���ꎞ�I��tmp�ɑ������
		tmp = smallNum;
		// �������l��smallNum�ɑ������
		smallNum = bigNum;
		// �ꎞ�I�ɕۑ����Ă����傫���l��bigNum�ɑ������
		bigNum = tmp;
		// �傫���l��bigNum��\������
		std::cout << "�傫���l��:" << bigNum << std::endl;
		// �������l��smallNum��\������
		std::cout << "�������l��:" << smallNum;
	}
}
