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
	const unsigned int QUIZE_NUM;		// �o�萔
	
	std::vector<std::string> word;		// �h�C�c�P��
	std::vector<std::string> word_jp;	// ���{��
	bool isOK;							// �G���[�Ȃ����H
};