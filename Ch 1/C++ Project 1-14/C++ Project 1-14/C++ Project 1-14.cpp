// 1-14
// �L�[�{�[�h����ǂݍ��񂾐����l�v���X�}�C�i�X5�͈̔͂̐����l�������_���ɐ������ĕ\������v���O�������쐬����B
// ���L�[�{�[�h����ǂݍ��񂾒l��100�ł���΁A95~105�̐����l��\�����邱�ƁB

#include "pch.h"
#include <ctime>
#include <cstdlib>
#include <iostream>


int main()
{
	// �����̎��ݒ�
	srand(time(NULL));
	// int�^��num�𐶐�
	int num;
	// int�^�̃����_�������}5�𐶐�
	int randomNum = rand() % 11 - 5;
	// �����l�����߂�
	std::cout << "�����l:";
	// ���͐���num�ɑ������
	std::cin >> num;
	// ���͐��ƃ����_�������𑫂���������ʂɕ\������
	std::cout << "���̒l�́}5�̗����𐶐����܂����B�����" << num + randomNum << "�ł��B";
}