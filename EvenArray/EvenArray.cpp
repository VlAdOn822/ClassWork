// EvenArray.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int nOfTests;
	cin >> nOfTests;
	for (int i = 0; i < nOfTests; i++)
	{
		int l;
		cin >> l;
		vector<int> v;
		for (int i = 0; i < l; i++)
		{
			int n;
			cin >> n;
			v.push_back(n);
		}

		int nOfMistakes = 0;
		int evenAndOddMistBalance = 0;
		for (int i = 0; i < l; i++)
		{
			if (v[i] % 2 != i % 2)
			{
				nOfMistakes++;
				if (v[i] % 2 == 0)
				{
					evenAndOddMistBalance++;
				}
				else
				{
					evenAndOddMistBalance--;
				}
			}
		}

		if (nOfMistakes == 0)
		{
			cout << nOfMistakes << endl;
		}
		else if (nOfMistakes % 2 != 0  evenAndOddMistBalance != 0)
		{
			cout << -1 << endl;
		}
		else
		{
			cout << nOfMistakes / 2 << endl;
		}
	}
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
