// 2-7
// ��̎����l��ǂݍ���ŁA�傫���ق��̒l��\������v���O�������쐬����B
// 

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
	// ���̑傫������\������
	std::cout << "�傫�����̒l�� " << (num1 > num2 ? num1 : num2) << " �ł�";

}
