// 2-1
// �E�Ɏ����悤�ɁA�����l��ǂݍ���ŁA���̐�Βl�����߂ĕ\������v���O�������쐬����B

#include "pch.h"
#include <iostream>

int main()
{
	// int�^�̐����𐶐�����
	int num;
	// ���������߂�
	std::cout << "�����l : ";
	// ���͒l��num�ɑ������
	std::cin >> num;
	// num�l�����̏ꍇ�A���̐����񑫂��Đ��ɕύX����
	if (num < 0) {
		num -= (num + num);
	}
	// �C�����num��\������
	std::cout << "���̐�Βl��" << num << "�ł��B";
}
