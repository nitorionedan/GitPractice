#include "Quize.hpp"
#include <algorithm>
#include <iostream>
#include <random>


Quize::Quize()
	: QUIZE_NUM(10)
	, isOK(true)
{
	// ドイツ語
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
	word.push_back("Straβ");
	word.push_back("Weg");
	word.push_back("Wagen");
	word.push_back("Auto");
	word.push_back("Zug");
	word.push_back("U-Bahn");
	word.push_back("Bus");
	word.push_back("Taxi");
	word.push_back("Berg");
	word.push_back("Fluβ");
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
	word.push_back("Fuβball");
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
	word.push_back("groβ");
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

	// 日本語
	word_jp.push_back("両親");
	word_jp.push_back("息子");
	word_jp.push_back("娘");
	word_jp.push_back("兄弟");
	word_jp.push_back("姉妹");
	word_jp.push_back("家族");
	word_jp.push_back("人間");
	word_jp.push_back("人々");
	word_jp.push_back("男、夫");
	word_jp.push_back("女、妻");
	word_jp.push_back("紳士");
	word_jp.push_back("婦人");
	word_jp.push_back("少年");
	word_jp.push_back("少女");
	word_jp.push_back("友達");
	word_jp.push_back("友達（女）");
	word_jp.push_back("学生");
	word_jp.push_back("学生（女）");
	word_jp.push_back("先生");
	word_jp.push_back("先生（女）");
	word_jp.push_back("医者");
	word_jp.push_back("医者（女）");
	word_jp.push_back("名前");
	word_jp.push_back("住所");
	word_jp.push_back("職業");
	word_jp.push_back("お金");
	word_jp.push_back("時間、暇");
	word_jp.push_back("丸パン");
	word_jp.push_back("ソーセージ");
	word_jp.push_back("ハム");
	word_jp.push_back("肉");
	word_jp.push_back("魚");
	word_jp.push_back("アイスクリーム");
	word_jp.push_back("ケーキ");
	word_jp.push_back("コーヒー");
	word_jp.push_back("紅茶");
	word_jp.push_back("ビール");
	word_jp.push_back("ワイン");
	word_jp.push_back("ミルク");
	word_jp.push_back("水");
	word_jp.push_back("家");
	word_jp.push_back("庭");
	word_jp.push_back("部屋");
	word_jp.push_back("台所");
	word_jp.push_back("ドア");
	word_jp.push_back("窓");
	word_jp.push_back("テーブル");
	word_jp.push_back("椅子");
	word_jp.push_back("絵・写真");
	word_jp.push_back("電話");
	word_jp.push_back("テレビ");
	word_jp.push_back("ラジオ");
	word_jp.push_back("背広");
	word_jp.push_back("ドレス");
	word_jp.push_back("スカート");
	word_jp.push_back("ズボン");
	word_jp.push_back("コート");
	word_jp.push_back("靴");
	word_jp.push_back("時計");
	word_jp.push_back("めがね");
	word_jp.push_back("万年筆");
	word_jp.push_back("ボールペン");
	word_jp.push_back("鉛筆");
	word_jp.push_back("ノート");
	word_jp.push_back("手紙");
	word_jp.push_back("本");
	word_jp.push_back("新聞");
	word_jp.push_back("駅");
	word_jp.push_back("教会");
	word_jp.push_back("郵便局");
	word_jp.push_back("公園");
	word_jp.push_back("レストラン");
	word_jp.push_back("喫茶店");
	word_jp.push_back("映画館");
	word_jp.push_back("学校");
	word_jp.push_back("通り");
	word_jp.push_back("道");
	word_jp.push_back("車(n)");
	word_jp.push_back("車(m)");
	word_jp.push_back("列車");
	word_jp.push_back("地下鉄");
	word_jp.push_back("バス");
	word_jp.push_back("タクシー");
	word_jp.push_back("山");
	word_jp.push_back("川");
	word_jp.push_back("森");
	word_jp.push_back("湖");
	word_jp.push_back("海(f)");
	word_jp.push_back("海(n)");
	word_jp.push_back("木");
	word_jp.push_back("花");
	word_jp.push_back("犬");
	word_jp.push_back("猫");
	word_jp.push_back("音楽");
	word_jp.push_back("テニス");
	word_jp.push_back("サッカー");
	word_jp.push_back("朝");
	word_jp.push_back("日");
	word_jp.push_back("夕");
	word_jp.push_back("夜");
	word_jp.push_back("週");
	word_jp.push_back("月");
	word_jp.push_back("年");
	word_jp.push_back("春");
	word_jp.push_back("夏");
	word_jp.push_back("秋");
	word_jp.push_back("冬");
	word_jp.push_back("休暇");
	word_jp.push_back("言語");
	word_jp.push_back("文化");
	word_jp.push_back("世界");
	word_jp.push_back("大きい");
	word_jp.push_back("小さい");
	word_jp.push_back("長い");
	word_jp.push_back("短い");
	word_jp.push_back("多い");
	word_jp.push_back("少ない");
	word_jp.push_back("速い");
	word_jp.push_back("のろい");
	word_jp.push_back("高い");
	word_jp.push_back("深い");
	word_jp.push_back("高価な");
	word_jp.push_back("安い");
	word_jp.push_back("重い");
	word_jp.push_back("軽い");
	word_jp.push_back("良い");
	word_jp.push_back("悪い");
	word_jp.push_back("正しい");
	word_jp.push_back("間違った");
	word_jp.push_back("古い、老いた");
	word_jp.push_back("新しい");
	word_jp.push_back("若い");
	word_jp.push_back("寒い");
	word_jp.push_back("暖かい");

	Initialize();
}


void Quize::Initialize()
{
	// 範囲チェック
	if (QUIZE_NUM > word.size() || QUIZE_NUM > word_jp.size())	isOK = false;
	if (!isOK)	return;

	// 非決定的な乱数生成
	std::random_device rnd_seed;
	std::random_device rnd_seed2;

	// 中身を全てシャッフル～
	std::mt19937_64 rnd(rnd_seed());	// < Mersenne twister (64bit)
	std::shuffle(word.begin(), word.end(), rnd);

	std::mt19937_64 rnd2(rnd_seed2());	// < Mersenne twister (64bit)
	std::shuffle(word_jp.begin(), word_jp.end(), rnd2);
}


void Quize::MakeQuize()
{
	if(!isOK)
	{
		std::cout << "出題数が配列の要素数を超えています！\n\n";
		return;
	}

	// 日本語問題
	std::cout << "---- 次の日本語をドイツ語に訳せ！ ----" << std::endl;
	for (int i = 0; i < QUIZE_NUM; i++)
		std::cout << word_jp.at(i) << std::endl;

	// 空白行
	std::cout << std::endl;

	// ドイツ語問題
	std::cout << "---- 次のドイツ語を日本語に訳せ！ ----" << std::endl;
	for (int i = 0; i < QUIZE_NUM; i++)
		std::cout << word.at(i) << std::endl;
}

// EOF