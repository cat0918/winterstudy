#pragma once
#include <random>

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
	int hp=0;
};

