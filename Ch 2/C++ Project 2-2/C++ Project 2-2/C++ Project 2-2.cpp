// 2-2
// List 2-5 �̍Ō�� else ���Aelse if (n==0)�ɕϊ�����Ƃǂ��Ȃ邩�����؂���B 

#include "pch.h"
#include <iostream>

using namespace std;

// ���̏ꍇ����else��(n==0)�͓������ʂƂȂ�

int main()
{
	// int�^�̐����𐶐�����
	int n;
	// ���������߂�\��
	cout << "�����l:";
	// �L���l��n�ɑ������
	cin >> n;
	// ������0�ȏ�̏ꍇ�̕\��
	if (n > 0)
		cout << "���̒l�͐��ł��B\n";
	// ������0�ȉ��̏ꍇ�̕\��
	else if (n < 0)
		cout << "���̒l�͕��ł��B\n";
	// ������0�̏ꍇ�̕\��
	else if (n == 0)
		cout << "���̒l��0�ł��B\n";

}
