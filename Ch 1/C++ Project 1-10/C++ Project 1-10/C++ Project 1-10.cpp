// 1-10 �E�Ɏ����悤�ɁA�L�[�{�[�h����ǂݍ��񂾐����l��10���������l��10���������l���o�͂���v���O�������쐬����B

#include "pch.h"
#include <iostream>

int main()
{
	// int�^�̐����𐶐�
	int tenChecker;
	// �����l�����߂�
	std::cout << "�����l:";
	// ���͒l��������
	std::cin >> tenChecker;
	// 10�𑫂�������\��
	std::cout << "10���������l��" << tenChecker + 10 << "�ł��B" << std::endl;
	// 10������������\��
	std::cout << "10���������l��" << tenChecker - 10 << "�ł��B" << std::endl;
}