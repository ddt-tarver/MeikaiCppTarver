// 2-11
// �L�[�{�[�h����ǂݍ��񂾎O�̐����̒����l�����߂ĕ\������v���O�������쐬����B

#include "pch.h"
#include <iostream>

int main()
{
	// �O�̕ϐ����쐬
	int num1, num2, num3;
	// ���͂��ꂽ�l��num1�ɓ����
	std::cin >> num1;
	// ���͂��ꂽ�l��num2�ɓ����
	std::cin >> num2;
	// ���͂��ꂽ�l��num3�ɓ����
	std::cin >> num3;
	// num1�������l�̏ꍇ�A�\������
	if ((num1 <= num2) && (num1 >= num3) || (num1 <= num3) && (num1 >= num2)) {
		std::cout << num1;
	}
	// num2�������l�̏ꍇ�A�\������
	else if ((num2 <= num1) && (num2 >= num3) || (num2 <= num3) && (num2 >= num1)) {
		std::cout << num2;
	}
	// �����l��num1�ł�num2�ł��Ȃ��ꍇ�Anum3��\������
	else {
		std::cout << num3;
	}
}
