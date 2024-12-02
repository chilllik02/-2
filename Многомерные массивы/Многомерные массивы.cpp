// Многомерные массивы.

using namespace std;
#include <iostream>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "ru");
	/*int data[3][4];
	int ilength = sizeof(data) / sizeof(data[0]);
	int ylength = sizeof(data[0]) / sizeof(data[0][0]);


	int ilength = size(data);
	int ilength = size(data[0]);


	for (auto el : data)
	{
		cout << el << " ";
	}*/


	char map[5][5] = {};
	int xplayer = 0;
	int yplayer = 0;

	

	int ilength = size(map);
	int jlength = size(map[0]);
	
	for (int i = 0; i < ilength; i++)
	{
		for (int j = 0; j < jlength; j++)
		{
			map[i][j] = '.';
		}
		cout << endl;
	}

	map[4][3] = '#';
	int command;
	bool win = false;

	while (true)
	{
		system("cls");
		for (int i = 0; i < ilength; i++)
		{
			for (int j = 0; j < jlength; j++)
			{
				char output = map[i][j];

				if (xplayer == i && yplayer == j)
				{

					if (map[i][j] == '#')
					{
						win = true;
						output = '@';
					}
					else
					{
						output = '+';
					}
				}
				cout << output << " ";
			}
			cout << endl;
		}
		if (win)
		{
			cout << "Вы победили!";
			break;
		}

		if (xplayer == -1 || xplayer == 5 || yplayer == -1 || yplayer == 5)
		{
			cout << "Мы зашли за пределы карты! Начните игру заново!";
			break;
		}

		cout << "Введите команду 1/2/3/4(вверх/вниз/влево/вправо): ";
		cin >> command;
		switch (command)
		{
		case 1:
			xplayer -= 1;
			break;
		case 2:
			xplayer += 1;
			break;
		case 3:
			yplayer -= 1;
			break;
		case 4:
			yplayer += 1;
			break;
		default:
			break;
		}
		
	}
	








	
	
}
