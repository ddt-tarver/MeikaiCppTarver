// 1-12�@�E�Ɏ����悤�ɁA�O�p�`�̒�ӂƍ�����ǂݍ���ŁA���̖ʐς�\������v���O�������쐬����B

#include "pch.h"
#include <iostream>

int main()
{
	// Double�^�̒�ӂ𐶐�
	double length;
	// Double�^�̍����𐶐�
	double height;
	// ��������ʂɕ\��
    std::cout << "�O�p�`�̖ʐς����߂܂��B\n";
	// ��ӂ����߂镶��\��
	std::cout << "��ӁF";
	// ��ӂ̒l����
	std::cin >> length;
	// ���������߂镶��\��
	std::cout << "�����F";
	// �����̒l����
	std::cin >> height;
	// �O�p�`�̖ʐς�\��
	std::cout << "�ʐς�" << (length * height)/2 << "�ł��B";
}

