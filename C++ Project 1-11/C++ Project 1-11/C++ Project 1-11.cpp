// 1 - 11 �E�Ɏ����悤�ɁA��̎����l��ǂݍ��݁A���̍��v�ƕ��ς����߂ĕ\������v���O�������쐬����B

#include "pch.h"
#include <iostream>

int main()
{
	// int�^��x�𐶐�����
	int x;
	// int�^��y�𐶐�����
	int y;
	// x�̒l�����߂�
	std::cout << "x�̒l:";
	// ������x�ɑ������
	std::cin >> x;
	// y�̒l�����߂�
	std::cout << "y�̒l:";
	// ������y�ɑ������
	std::cin >> y;
	// x��y�𑫂�������\������
	std::cout << "���v��" << x + y << "�ł��B" << std::endl;
	// x��y�̕��ς�\������
	std::cout << "���ς�" << (x + y) / 2 << "�ł��B";
}