#include <stdio.h>
#include <windows.h>
#include <conio.h>

void gotoxy(int x, int y)
{
	COORD pos={x, y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}


int main(void)
{
	char szChoice = 0;
	int x = 0, y = 0;
	while (true)
	{
		gotoxy(x,y);
		printf("¡Ú");
		if(kbhit())
		{
			szChoice = getch();
			switch(szChoice)
			{
				case 'w':
					y--;
					break;
				case 'a':
					x--;
					break;
				case 's':
					y++;
					break;
				case 'd':
					x++;
					break;
			}
			Sleep(50);
			system("cls");
		}
	}
	return 0;
}

