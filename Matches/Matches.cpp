// Matches.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Matches.h"
using namespace std;

int main()
{
	int matchcount = 20;
	int currentPlayer = 2;

	while (matchcount > 0)
	{
		Game(currentPlayer, matchcount);
	}
	// Win
	cout << "*** PLAYER " << currentPlayer << " HAVE WON ***" << endl;
}

void Game(int& currentPlayer, int& matchcount)
{
	int move;
	ChangeCurrentPlayer(currentPlayer);
	DrawMatches(matchcount);
	PlayerMove(currentPlayer, move);
	matchcount -= move;
}

void ChangeCurrentPlayer(int& currentPlayer)
{
	currentPlayer = 3 - currentPlayer;
}

void PlayerMove(int currentPlayer, int& move)
{
	while (true)
	{
		cout << "Player " << currentPlayer << ". Make your move" << endl;
		cin >> move;

		if (move >= 1 && move <= 3)
		{
			break;
		}
		cout << "Move must be from 1 to 3" << endl;
	}
}

void DrawMatches(int matchcount)
{
	for (int i = 1; i <= matchcount; i++)
	{
		cout << "|";
	}
	cout << endl;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"


// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
