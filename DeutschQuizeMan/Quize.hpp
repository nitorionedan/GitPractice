#pragma once

#include <vector>
#include <string>


class Quize
{
public:
	Quize();
	~Quize(){}
	void Initialize();
	void MakeQuize();

private:
	const unsigned int QUIZE_NUM;		// 出題数
	
	std::vector<std::string> word;		// ドイツ単語
	std::vector<std::string> word_jp;	// 日本語
	bool isOK;							// エラーなしか？
};