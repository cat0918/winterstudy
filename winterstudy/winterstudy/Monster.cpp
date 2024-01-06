#include "Monster.h"
#include "common.h"
std::random_device rd;
std::uniform_int_distribution<int> uid(2,13);
std::default_random_engine dre(rd());
Monster::Monster()
{

}

Monster::~Monster()
{
}

void Monster::Init()
{
	
	speed = 1;
	hp = 1;
	monsterx = uid(dre);
	monstery = uid(dre);
}

void Monster::Update()
{
	
}

void Monster::Render()
{
	gotoxy(monsterx * 2, monstery - 1);
	cout << "จั";
}

void Monster::Destroy()
{
}
