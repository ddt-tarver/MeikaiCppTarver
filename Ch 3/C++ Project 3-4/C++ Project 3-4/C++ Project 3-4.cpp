// 3-4
// List 3-4��while���I������x�̒l��-1�ɂȂ邱�Ƃ��m�F�ł���悤�ɏ����������v���O�������쐬����B 

#include <iostream>

int main() {
	// int�^��countDown�𐶐�
	int countDown;
	// �J�E���g�_�E�����n�߂镶��\������
	std::cout << "�J�E���g�_�E�����܂��B\n";
	// do �����n�߂�
	do {
		// �����l�����߂镶��\������
		std::cout << "���̐����l: ";
		// ���͂��ꂽ������countDown�ɑ������
		std::cin >> countDown;
		// ���͂��ꂽ���������̒l�ł��鎖���m�F
	} while (countDown <= 0);
	// countDown�̌��݂̒l��-1�ȉ��ł͂Ȃ����Ƃ��m�F
	while (countDown >= -1) {
		// countDown�̐�����\��
		std::cout << countDown << "\n";
		// countDown�̐������f�N�������g����
		countDown--;
	}
}


