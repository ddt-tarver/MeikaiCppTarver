// 2-3
// ���int�^�ϐ�a,b �ɒl��ǂݍ���ŁA���̑召�֌W���ȉ��̂����ꂩ�ŕ\������v���O�������쐬����B
// �wa�̂ق����傫���ł��B�x�wb�̂ق����傫���ł��B�x�wa��b�͓����l�ł��B�x

#include "pch.h"
#include <iostream>

int main()
{
	// int�^��a��b�𐶐�����
	int a, b;
	// a�̒l�����߂�
	std::cout << "a�̒l:";
	// ���͂��ꂽ�l��a�ɑ������
	std::cin >> a;
	// b�̒l�����߂�
	std::cout << "b�̒l:";
	// ���͂��ꂽ�l��b�ɑ������
	std::cin >> b;
	// a�̕����傫���ꍇ�̕���\������
	if (a > b) {
		std::cout << "a�̂ق����傫���ł��B";
	// b�̕����傫���ꍇ�̕���\������
	} else if (b > a) {
		std::cout << "b�̂ق����傫���ł��B";
	// a��b�������̏ꍇ�̕���\������
	} else {
		std::cout << "a��b�͓����l�ł��B";
	}
}