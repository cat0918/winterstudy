#include "Player.h"
#include "common.h"
Player::Player()
{
}

Player::~Player()
{
}

void Player::Init()
{
}

void Player::Update()
{
	int input = _kbhit();
	key = 0;
	if (input)
	{
		key = _getch();
	}
	switch (key) {
	case 'w':
		Playery -= 1;
		position = 1;
		break;
	case 's':
		Playery += 1;
		position = 2;
		break;
	case 'a':
		Playerx -= 1;
		position = 3;
		break;
	case 'd':
		Playerx += 1;
		position = 4;
		break;
	case 'e':
		break;
	case 'j': //°ø°Ý
		if (position == 1) {
			gotoxy(Playerx * 2, Playery -1);
			cout << "¡Ú";
		}
		else if (position == 2) {
			gotoxy(Playerx * 2, Playery + 1);
			cout << "¡Ú";
		}
		else if (position == 3) {
			gotoxy(Playerx * 2-2, Playery);
			cout << "¡Ú";
		}
		else if (position == 4) {
			gotoxy(Playerx * 2 + 2, Playery);
			cout << "¡Ú";
		}
		break;
	default:
		break;
	}
}

void Player::Render()
{
	gotoxy(Playerx * 2, Playery);
	std::cout << "¢Ã";
}

void Player::Destroy()
{
}

