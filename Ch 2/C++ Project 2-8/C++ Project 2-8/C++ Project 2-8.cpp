// 2-8
// ��̐����l��ǂݍ���ŁA�����̒l�̍���\������v���O�������쐬����B

#include "pch.h"
#include <iostream>

int main()
{
	// int�^�̐����𐶐�����
	int num1;
	// int�^�̐����𐶐�����
	int num2;
	// ���͒l��num1�ɑ������
	std::cin >> num1;
	// ���͒l��num2�ɑ������
	std::cin >> num2;
	// ���͒l�̍���\������
	std::cout << "�l�̍��� " << (num1 > num2 ? num1 - num2 : num2 - num1) << " �ł��B";
}
