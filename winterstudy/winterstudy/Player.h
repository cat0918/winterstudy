#pragma once
 class Player
{

public:
	Player();
	~Player();
	static Player* Getplayer() {
		if (player == nullptr)
			player = new Player();

		return player;
	};
public:
	void Init();
	void Update();
	void Render();
	void Destroy();
	int getPlayerx();
	int getPlayery();
	
private:
	int Playerx = 5;
	int Playery = 5;
	int key = 0;
	int position = 0;
	int stop = 0;
	static Player* player;
};

