// 1-13 �ȉ��Ɏ����v���O�������쐬����B
// 1���̐��̐����l�i���Ȃ킿1�ȏ�9�ȉ��̒l�j�������_���ɐ������ĕ\���B
// 1���̕��̐����l�i���Ȃ킿-9�ȏ�-1�ȉ��̒l�j�������_���ɐ������ĕ\���B
// 2���̐��̐����l�i���Ȃ킿10�ȏ�99�ȉ��̒l�j�������_���ɐ������ĕ\���B

#include "pch.h"
#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
	// �����̎��ݒ�
	srand(time(NULL));
	// 1�ȏ�9�ȉ��̃����_���������쐬
	int num1 = rand() % 9 + 1;
	// �����_������num1��\��
	std::cout << num1 << std::endl;
	// -9�ȏ�-1�ȉ��̃����_���������쐬
	int num2 = rand() % 10 - 10;
	// �����_������num2��\��
	std::cout << num2 << std::endl;
	// 10�ȏ�99�ȉ��̃����_���������쐬
	int num3 = rand() % 90 + 10;
	// �����_������num3��\��
	std::cout << num3; 
}
