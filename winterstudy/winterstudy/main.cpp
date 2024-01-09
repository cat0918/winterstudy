#include "Common.h"
#include "Player.h"
#include "GameInstance.h"
#include "Timer.h"
#include "Monster.h"
#include <vector>
Player *Player::player;
int main()
{
	CGameInstance* Instance = new CGameInstance;
	Player* player = Player::Getplayer();
	Timer* timer = new Timer;
	vector<Monster*> monsters;
	for (int i = 0; i < 3; i++) {
		monsters.emplace_back(new Monster());
	}
	Instance->Init();
	player->Init();
	timer->Init();
	for (auto &i : monsters) {
		i->Init();
	}
	
	while (true)
	{
		Instance->Update();
		Instance->Render();
		for (auto& i : monsters) {
			i->Update();
			if (i->id != 0) {
				i->Render();
			}
		}
		player->Update();
		player->Render();
		timer->Update();
		timer->Render();
		
		Sleep(100);
	}

	Instance->Destroy();
	player->Destroy();
	delete Instance;

	std::cout << "End" << std::endl;

	return 0;
}