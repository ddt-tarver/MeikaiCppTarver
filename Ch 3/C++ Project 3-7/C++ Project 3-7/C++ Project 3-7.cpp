// 3-7
// �E�Ɏ����悤�ɁA���̐����l��ǂݍ���ŁA���̌������o�͂���v���O�������쐬����B

#include <iostream>

int main() {
	// int�^��bigNum�𐶐�����
	int bigNum;
	// int�^��counter�𐶐�����
	int counter = 1;
	// ���������߂镶
	std::cout << "���̐����l: ";
	// ���͒l����
	std::cin >> bigNum;
	// bigNum���ꌅ�ȏ�̏ꍇ
	while (bigNum > 9) {
		// 10�Ŋ���
		bigNum = bigNum / 10;
		// �J�E���g�A�b�v
		counter++;
	}
	// ������\��
	std::cout << counter;
	// ��ʂ�\��
	do
	{

	} while (std::cin.get() != 'a');
	return 0;
}
