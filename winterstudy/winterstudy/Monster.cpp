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
	id = 1;
	monsterx = uid(dre);
	monstery = uid(dre);
}

void Monster::Update()
{
	storex = player->getPlayerx();
	storey = player->getPlayery();
	playerattack = player->ifAttack();
	playerposition = player->getPosition();
	if (playerattack != 0) {
		
		switch (playerposition) {
		case 1:
			if (monsterx == storex && monstery == storey )
				id = 0;
			break;
		case 2:
			if (monsterx == storex && monstery == storey+2)
				id = 0;
			break;
		case 3:
			if (monsterx == storex -1&& monstery == storey+1)
				id = 0;
			break;
		case 4:
			if (monsterx == storex + 1 && monstery == storey+1)
				id = 0;
			break;
		}
		
	}
	/*
	if (count == shift) {
		if (monsterx < storex) {
			if (monsterx < 13) {
				monsterx += speed;
			}
		}
		else if(monsterx >storex){
			if (monsterx > 1) {
				monsterx -= speed;
			}
		}
		if (monstery < storey+1) {
			if (monstery < 13) {
				monstery += speed;
			}
		}
		else if(monstery >storey+1) {
			if (monstery > 2) {
				monstery -= speed;
			}
		}
		count = 0;
	}
	*/
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
