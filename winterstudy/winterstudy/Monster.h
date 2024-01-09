#pragma once
#include <random>
//Player* players = new Player;
class Monster
{
public:
	Monster();
	~Monster();
public:
	void Init();
	void Update();
	void Render();
	void Destroy();
	int id = 0;
private:
	double speed=0;
	int monsterx=0;
	int monstery=0;
	int storex = 0;
	int storey = 0;
	int shift = 0;
	int count = 0;
	int hp=0;
	int playerattack = 0;
	int playerposition = 0;
};

