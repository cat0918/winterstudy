#include "Monster.h"
#include "common.h"
#include "Player.h"
std::random_device rd;
std::uniform_int_distribution<int> uid(2,13);
std::uniform_int_distribution<int> trans(5,10);
std::default_random_engine dre(rd());
//Player* Player::player;
Player* player = Player::Getplayer();
Monster::Monster()
{

}

Monster::~Monster()
{
}

void Monster::Init()
{
	
	speed = 1;
	shift = trans(dre);
	hp = 1;
	monsterx = uid(dre);
	monstery = uid(dre);
}

void Monster::Update()
{
	storex = player->getPlayerx();
	storey = player->getPlayery();
	if (count == shift) {
		if (monsterx < storex) {
			if (monsterx < 13) {
				monsterx += speed;
			}
		}
		else {
			if (monsterx > 1) {
				monsterx -= speed;
			}
		}
		if (monstery < storey) {
			if (monstery < 13) {
				monstery += speed;
			}
		}
		else {
			if (monstery > 2) {
				monstery -= speed;
			}
		}
		count = 0;
	}
	count++;
}

void Monster::Render()
{
	gotoxy(monsterx * 2, monstery - 1);
	cout << "จั";
}

void Monster::Destroy()
{
}
