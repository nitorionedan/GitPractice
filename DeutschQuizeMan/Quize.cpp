#include "Quize.hpp"
#include <algorithm>
#include <iostream>
#include <random>


Quize::Quize()
	: QUIZE_NUM(10)
	, isOK(true)
{
	// �h�C�c��
	word.push_back("Eltern");
	word.push_back("Sohn");
	word.push_back("Scwester");
	word.push_back("Bruder");
	word.push_back("Familie");
	word.push_back("Mensch");
	word.push_back("Leute");
	word.push_back("Mann");
	word.push_back("Frau");
	word.push_back("Herr");
	word.push_back("Dame");
	word.push_back("Junge");
	word.push_back("Ma:dchen");
	word.push_back("Freund");
	word.push_back("Freundin");
	word.push_back("Student");
	word.push_back("Studentin");
	word.push_back("Lehrer");
	word.push_back("Lehrerin");
	word.push_back("Arzt");
	word.push_back("A:rztin");
	word.push_back("Name");
	word.push_back("Adresse");
	word.push_back("Beruf");
	word.push_back("Geld");
	word.push_back("Zeit");
	word.push_back("Bro:tchen");
	word.push_back("Wurst");
	word.push_back("Schinken");
	word.push_back("Fleisch");
	word.push_back("Fisch");
	word.push_back("Eis");
	word.push_back("Kuchen");
	word.push_back("Kaffee");
	word.push_back("Tee");
	word.push_back("Bier");
	word.push_back("Wein");
	word.push_back("Milch");
	word.push_back("Wasser");
	word.push_back("Haus");
	word.push_back("Garten");
	word.push_back("Zimmer");
	word.push_back("Ku:che");
	word.push_back("Tu:r");
	word.push_back("Fenster");
	word.push_back("Tisch");
	word.push_back("Stuhl");
	word.push_back("Bild");
	word.push_back("Telefon");
	word.push_back("Fernsehen");
	word.push_back("Radio");
	word.push_back("Anzug");
	word.push_back("Kleid");
	word.push_back("Rock");
	word.push_back("Hose");
	word.push_back("Mantel");
	word.push_back("Schuh");
	word.push_back("Uhr");
	word.push_back("Brille");
	word.push_back("Fu:ller");
	word.push_back("Kugelschreiber");
	word.push_back("Kuli");
	word.push_back("Bleistift");
	word.push_back("Heft");
	word.push_back("Brief");
	word.push_back("Buch");
	word.push_back("Zeitung");
	word.push_back("Bahnhof");
	word.push_back("Kirche");
	word.push_back("Post");
	word.push_back("Park");
	word.push_back("Restaurant");
	word.push_back("Cafe'");
	word.push_back("Kino");
	word.push_back("Schule");
	word.push_back("Stra��");
	word.push_back("Weg");
	word.push_back("Wagen");
	word.push_back("Auto");
	word.push_back("Zug");
	word.push_back("U-Bahn");
	word.push_back("Bus");
	word.push_back("Taxi");
	word.push_back("Berg");
	word.push_back("Flu��");
	word.push_back("Walt");
	word.push_back("See(m)");
	word.push_back("See(f)");
	word.push_back("Meer(n)");
	word.push_back("Baum");
	word.push_back("Blume");
	word.push_back("Hund");
	word.push_back("Katze");
	word.push_back("Musik");
	word.push_back("Tennis");
	word.push_back("Fu��ball");
	word.push_back("Morgen");
	word.push_back("Tag");
	word.push_back("Abend");
	word.push_back("Nacht");
	word.push_back("Woche");
	word.push_back("Monat");
	word.push_back("Jahr");
	word.push_back("Fru:hling");
	word.push_back("Sommer");
	word.push_back("Herbst");
	word.push_back("Winter");
	word.push_back("Urlaub");
	word.push_back("Sprache");
	word.push_back("Kultur");
	word.push_back("Weld");
	word.push_back("gro��");
	word.push_back("klein");
	word.push_back("lang");
	word.push_back("kurz");
	word.push_back("viel");
	word.push_back("wenig");
	word.push_back("schnell");
	word.push_back("langsam");
	word.push_back("hoch");
	word.push_back("tief");
	word.push_back("teuer");
	word.push_back("billig");
	word.push_back("schwer");
	word.push_back("leicht");
	word.push_back("gut");
	word.push_back("schlecht");
	word.push_back("richtig");
	word.push_back("falsch");
	word.push_back("alt");
	word.push_back("neu");
	word.push_back("jung");
	word.push_back("kalt");
	word.push_back("warm");

	// ���{��
	word_jp.push_back("���e");
	word_jp.push_back("���q");
	word_jp.push_back("��");
	word_jp.push_back("�Z��");
	word_jp.push_back("�o��");
	word_jp.push_back("�Ƒ�");
	word_jp.push_back("�l��");
	word_jp.push_back("�l�X");
	word_jp.push_back("�j�A�v");
	word_jp.push_back("���A��");
	word_jp.push_back("�a�m");
	word_jp.push_back("�w�l");
	word_jp.push_back("���N");
	word_jp.push_back("����");
	word_jp.push_back("�F�B");
	word_jp.push_back("�F�B�i���j");
	word_jp.push_back("�w��");
	word_jp.push_back("�w���i���j");
	word_jp.push_back("�搶");
	word_jp.push_back("�搶�i���j");
	word_jp.push_back("���");
	word_jp.push_back("��ҁi���j");
	word_jp.push_back("���O");
	word_jp.push_back("�Z��");
	word_jp.push_back("�E��");
	word_jp.push_back("����");
	word_jp.push_back("���ԁA��");
	word_jp.push_back("�ۃp��");
	word_jp.push_back("�\�[�Z�[�W");
	word_jp.push_back("�n��");
	word_jp.push_back("��");
	word_jp.push_back("��");
	word_jp.push_back("�A�C�X�N���[��");
	word_jp.push_back("�P�[�L");
	word_jp.push_back("�R�[�q�[");
	word_jp.push_back("�g��");
	word_jp.push_back("�r�[��");
	word_jp.push_back("���C��");
	word_jp.push_back("�~���N");
	word_jp.push_back("��");
	word_jp.push_back("��");
	word_jp.push_back("��");
	word_jp.push_back("����");
	word_jp.push_back("�䏊");
	word_jp.push_back("�h�A");
	word_jp.push_back("��");
	word_jp.push_back("�e�[�u��");
	word_jp.push_back("�֎q");
	word_jp.push_back("�G�E�ʐ^");
	word_jp.push_back("�d�b");
	word_jp.push_back("�e���r");
	word_jp.push_back("���W�I");
	word_jp.push_back("�w�L");
	word_jp.push_back("�h���X");
	word_jp.push_back("�X�J�[�g");
	word_jp.push_back("�Y�{��");
	word_jp.push_back("�R�[�g");
	word_jp.push_back("�C");
	word_jp.push_back("���v");
	word_jp.push_back("�߂���");
	word_jp.push_back("���N�M");
	word_jp.push_back("�{�[���y��");
	word_jp.push_back("���M");
	word_jp.push_back("�m�[�g");
	word_jp.push_back("�莆");
	word_jp.push_back("�{");
	word_jp.push_back("�V��");
	word_jp.push_back("�w");
	word_jp.push_back("����");
	word_jp.push_back("�X�֋�");
	word_jp.push_back("����");
	word_jp.push_back("���X�g����");
	word_jp.push_back("�i���X");
	word_jp.push_back("�f���");
	word_jp.push_back("�w�Z");
	word_jp.push_back("�ʂ�");
	word_jp.push_back("��");
	word_jp.push_back("��(n)");
	word_jp.push_back("��(m)");
	word_jp.push_back("���");
	word_jp.push_back("�n���S");
	word_jp.push_back("�o�X");
	word_jp.push_back("�^�N�V�[");
	word_jp.push_back("�R");
	word_jp.push_back("��");
	word_jp.push_back("�X");
	word_jp.push_back("��");
	word_jp.push_back("�C(f)");
	word_jp.push_back("�C(n)");
	word_jp.push_back("��");
	word_jp.push_back("��");
	word_jp.push_back("��");
	word_jp.push_back("�L");
	word_jp.push_back("���y");
	word_jp.push_back("�e�j�X");
	word_jp.push_back("�T�b�J�[");
	word_jp.push_back("��");
	word_jp.push_back("��");
	word_jp.push_back("�[");
	word_jp.push_back("��");
	word_jp.push_back("�T");
	word_jp.push_back("��");
	word_jp.push_back("�N");
	word_jp.push_back("�t");
	word_jp.push_back("��");
	word_jp.push_back("�H");
	word_jp.push_back("�~");
	word_jp.push_back("�x��");
	word_jp.push_back("����");
	word_jp.push_back("����");
	word_jp.push_back("���E");
	word_jp.push_back("�傫��");
	word_jp.push_back("������");
	word_jp.push_back("����");
	word_jp.push_back("�Z��");
	word_jp.push_back("����");
	word_jp.push_back("���Ȃ�");
	word_jp.push_back("����");
	word_jp.push_back("�̂낢");
	word_jp.push_back("����");
	word_jp.push_back("�[��");
	word_jp.push_back("������");
	word_jp.push_back("����");
	word_jp.push_back("�d��");
	word_jp.push_back("�y��");
	word_jp.push_back("�ǂ�");
	word_jp.push_back("����");
	word_jp.push_back("������");
	word_jp.push_back("�Ԉ����");
	word_jp.push_back("�Â��A�V����");
	word_jp.push_back("�V����");
	word_jp.push_back("�Ⴂ");
	word_jp.push_back("����");
	word_jp.push_back("�g����");

	Initialize();
}


void Quize::Initialize()
{
	// �͈̓`�F�b�N
	if (QUIZE_NUM > word.size() || QUIZE_NUM > word_jp.size())	isOK = false;
	if (!isOK)	return;

	// �񌈒�I�ȗ�������
	std::random_device rnd_seed;
	std::random_device rnd_seed2;

	// ���g��S�ăV���b�t���`
	std::mt19937_64 rnd(rnd_seed());	// < Mersenne twister (64bit)
	std::shuffle(word.begin(), word.end(), rnd);

	std::mt19937_64 rnd2(rnd_seed2());	// < Mersenne twister (64bit)
	std::shuffle(word_jp.begin(), word_jp.end(), rnd2);
}


void Quize::MakeQuize()
{
	if(!isOK)
	{
		std::cout << "�o�萔���z��̗v�f���𒴂��Ă��܂��I\n\n";
		return;
	}

	// ���{����
	std::cout << "---- ���̓��{����h�C�c��ɖ󂹁I ----" << std::endl;
	for (int i = 0; i < QUIZE_NUM; i++)
		std::cout << word_jp.at(i) << std::endl;

	// �󔒍s
	std::cout << std::endl;

	// �h�C�c����
	std::cout << "---- ���̃h�C�c�����{��ɖ󂹁I ----" << std::endl;
	for (int i = 0; i < QUIZE_NUM; i++)
		std::cout << word.at(i) << std::endl;
}

// EOF