// 3-5 
// �ǂݍ��񂾒l��1�����ł���Ή��s�������o�͂��Ȃ��悤��
// List3-6�������������v���O�������쐬����B

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
		// ����\������
		std::cout << '*';
		// i�̃J�E���^�[���J�E���g�A�b�v����
		i++;
	}
	// ���̉�ʂ�\������
	do
	{

	} while (std::cin.get() != 'a');
	return 0;
}