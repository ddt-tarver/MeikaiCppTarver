// 2-10 
// �L�[�{�[�h����ǂݍ��񂾎O�̐����̍ŏ��l�����߂ĕ\������v���O�������쐬����B

#include "pch.h"
#include <iostream>

int main()
{
	// �O�̐����𐶐�����
	int num1, num2, num3;
	// ���͂��ꂽ�l��num1�ɓ����
	std::cin >> num1;
	// ���͂��ꂽ�l��num2�ɓ����
	std::cin >> num2;
	// ���͂��ꂽ�l��num3�ɓ����
	std::cin >> num3;
	// min ��num1�ŏ���������
	int min = num1;
	// num2��min���Ⴂ�ꍇ�Anum2�̒l��min�ɑ������
    if (num2 < min) {
        min = num2;
    }
	// num3��min���Ⴂ�ꍇ�Anum3�̒l��min�ɑ������
    if (num3 < min) {
        min = num3;
    }
	// �ŏ��l��\������
	std::cout << "�ŏ��l�� " << min << "�ł��B";
	
}
