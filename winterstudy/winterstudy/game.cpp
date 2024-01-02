#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int main() {
	char board[11][11];
	int player_x = 0;
	int player_y = 0;
	char key;
	while (1) {
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				board[i][j] = '0';
			}
		}
		board[player_y][player_x] = '@';
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				cout << board[i][j];
			}
			cout << endl;
		}
		key = _getch();
		switch (key) {
		case 'w':
			if (player_y > 0) {
				player_y -= 1;
			}
			break;
		case 's':
			if (player_y < 9) {
				player_y += 1;
			}
			break;
		case 'a':
			if (player_x > 0) {
				player_x -= 1;
			}
			break;
		case 'd':
			if (player_x < 9) {
				player_x += 1;
			}
			break;
		case 'e':
			//상호작용키입니당.
			break;
		}
		system("cls");
	}
}