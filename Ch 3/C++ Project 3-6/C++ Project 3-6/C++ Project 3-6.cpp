// 3-6
// �ǂݍ��񂾒l�̌������L��������\������v���O�������쐬����B
// +��-�����݂ɕ\�����邱�ƁB 

#include <iostream>

int main() {

	// int�^��counter�𐶐�����
	int counter;
	// ����\������
	std::cout << "����\�����܂���: ";
	// input��counter�ɓ����
	std::cin >> counter;
	// int�^��i�𐶐�
	int i = 0;
	// i�̒l��counter���Ⴂ���m�F
	while (i < counter) {
		// +��\������
		std::cout << '+';
		// i�̃J�E���^�[���J�E���g�A�b�v����
		i++;
		// i�̒l��counter���Ⴂ���m�F
		if (i < counter) {
			// -��\��
			std::cout << '-';
			// i���J�E���g�A�b�v
			i++;
			continue;
		}
	}

	// ���̉�ʂ�\������
	do
	{

	} while (std::cin.get() != 'a');
	return 0;
}