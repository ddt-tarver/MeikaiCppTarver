// 3-10
// �S��Ƃ͋t�ɁA0���琳�̐����l�܂ŃJ�E���g�A�b�v����v���O�������쐬����B

#include <iostream>

int main() {

	// int�^��countUp�𐶐�
	int countUp;
	// �����l�����߂�
	std::cout << "�����l����͂��Ă������� : ";
	// ���͂��ꂽ�l��countUp�ɑ��
	std::cin >> countUp;
	// loop�p��int�𐶐�
	int i = 0;
	do {
		// ������\������
		std::cout << i << std::endl;
		// i�̒l���J�E���g�A�b�v
		i++;
	} while (i < countUp + 1);
	// ��ʂ��~�߂鏈��
	do
	{

	} while (std::cin.get() != 'a');
	return 0;
}