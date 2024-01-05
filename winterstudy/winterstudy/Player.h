#pragma once
class Player
{
public:
	Player();
	~Player();
public:
	void Init();
	void Update();
	void Render();
	void Destroy();
	
private:
	int Playerx = 5;
	int Playery = 5;
	int key = 0;
	int position = 0;
	int stop = 0;
};

