#include <iostream>
#include "Quize.hpp"


int main() 
{
	// �^�C�g��
	std::cout << "///////////////////////////////////////////" << std::endl;
	std::cout << "//                                       //" << std::endl;
	std::cout << "//                                       //" << std::endl;
	std::cout << "//       �h�C�c�Q�O�O�P��i����P�O��j  //" << std::endl;
	std::cout << "//                                       //" << std::endl;
	std::cout << "//                         �@�@�@by��I//" << std::endl;
	std::cout << "///////////////////////////////////////////" << std::endl;

	// �N�C�Y�o��
	Quize* quize = new Quize;
	char exit;
	while (1)
	{
		quize->Initialize();
		quize->MakeQuize();
		std::cout << "--- �������͂��Ă��������B [0]: �I��, [���̑�]: �V�K ---" << std::endl;
		
		// �I�����邩�ǂ����q�˂�
		std::cin.get(exit);

		// 0�����͂��ꂽ��I��
		if (exit == '0')	break;
	}

	// �I������
	delete quize;

	return 0;
}