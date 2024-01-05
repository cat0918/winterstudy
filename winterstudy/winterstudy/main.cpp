#include "Common.h"
#include "Player.h"
#include "GameInstance.h"
#include "Timer.h"
#include "Monster.h"

int main()
{
	CGameInstance* Instance = new CGameInstance;
	Player* player = new Player;
	Timer* timer = new Timer;
	Monster* monster = new Monster;

	Instance->Init();
	player->Init();
	timer->Init();
	
	while (true)
	{
		Instance->Update();
		Instance->Render();
		
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