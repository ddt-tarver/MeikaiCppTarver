// 3-9
// ���̐����l��0�܂ŃJ�E���g�_�E������List3-4��for���Ŏ�������B

#include <iostream>

int main() {
	// int�^�̐����𐶐�
	int countDown;
	// �����l�����߂�
	std::cout << "�����l����͂��Ă������� :";
	// ���͂��ꂽ�l��countDown�ɑ��
	std::cin >> countDown;
	// countDown�̒l��-1���傫���ꍇ
	for (int i = -1; i < countDown; countDown--)
	{
		// ������\������
		std::cout << countDown << std::endl;
	}
	// ��ʂ��~�߂鏈��
	do
	{

	} while (std::cin.get() != 'a');
	return 0;
}