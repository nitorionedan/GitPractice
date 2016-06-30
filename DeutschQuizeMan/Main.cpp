#include <iostream>
#include "Quize.hpp"


int main() 
{
	// タイトル
	std::cout << "///////////////////////////////////////////" << std::endl;
	std::cout << "//                                       //" << std::endl;
	std::cout << "//                                       //" << std::endl;
	std::cout << "//       ドイツ２００単語（から１０題）  //" << std::endl;
	std::cout << "//                                       //" << std::endl;
	std::cout << "//                         　　　by矢風！//" << std::endl;
	std::cout << "///////////////////////////////////////////" << std::endl;

	// クイズ出題
	Quize* quize = new Quize;
	char exit;
	while (1)
	{
		quize->Initialize();
		quize->MakeQuize();
		std::cout << "--- 何か入力してください。 [0]: 終了, [その他]: 新規 ---" << std::endl;
		
		// 終了するかどうか尋ねる
		std::cin.get(exit);

		// 0が入力されたら終了
		if (exit == '0')	break;
	}

	// 終了処理
	delete quize;

	return 0;
}