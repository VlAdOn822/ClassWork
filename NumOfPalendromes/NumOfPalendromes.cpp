﻿// NumOfPalendromes.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	string s, word;
	int countOfPollyndromes = 0;
	ifstream in("input.txt");
	getline(in, s);
	in.close();

	for (int j = 0; j < s.length(); j++)
	{
		bool ifPalindrome = true;

		while (s[j] >= 'A' && s[j] <= 'Z' || s[j] >= 'a' && s[j] <= 'z' || s[j] >= '0' && s[j] <= '9')
		{
			word += s[j];
			j++;
		}

		if (word != "")
		{
			for (int i = 0; i < word.length() / 2; i++)
			{
				if (word[i] != word[word.length() - 1 - i])
				{
					ifPalindrome = false;
					break;
				}
			}

			if (ifPalindrome)
			{
				countOfPollyndromes++;
			}
			word = "";
		}
	}
	ofstream out("output.txt");
	out << countOfPollyndromes;
	out.close();
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
