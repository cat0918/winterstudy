#include "Common.h"
#include "Player.h"
#include "GameInstance.h"

int main()
{
	CGameInstance* Instance = new CGameInstance;
	Player* player = new Player;

	Instance->Init();
	player->Init();

	while (true)
	{
		Instance->Update();
		Instance->Render();
		player->Update();
		player->Render();
		Sleep(100);

		if (Instance->IsNeedDestroy()) break;
	}

	Instance->Destroy();
	player->Destroy();
	delete Instance;

	std::cout << "End" << std::endl;

	return 0;
}