// 3-8
// �ǂݍ��񂾒l���P�����ł���Ή��s�������o�͂��Ȃ��悤�ɁAList3-10��
// �����������v���O�������쐬����B

#include <iostream>

int main() {
    // int�^��starNum�𐶐�
	int starNum;
	// ������\��
	std::cout << "����*��\�����܂��� : ";
    // ���͂��ꂽ������starNum�ɑ������
	std::cin >> starNum;
    // starNum�̐���0���傫���ꍇ
	for (int i = 0; i < starNum; i++) {
	    // ����\������
		std::cout << '*';
	}
    // ���̐���1�ȏ�̏ꍇ
	if (starNum > 0) {
	    // ���s���s��
		std::cout << '\n';
	}
    // ��ʂ��~�߂鏈��
	do
	{

	} while (std::cin.get() != 'a');
	return 0;
}