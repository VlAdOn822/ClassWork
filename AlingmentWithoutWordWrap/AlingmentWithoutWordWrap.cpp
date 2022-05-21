// AlingmentWithoutWordWrap.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	getline(cin, s);
	int lOfLine;
	cin >> lOfLine;
	string currentWord;
	string currentLine;


	for (int i = 0; i <= s.length(); i++)
	{
		if (currentLine.length() < lOfLine && s[i] != ' ' && i != s.length())
		{
			currentWord += s[i];
		}
		else if (i == s.length())
		{
			currentLine += currentWord += " ";
			cout << currentLine << endl;
		}
		else if (currentLine.length() + currentWord.length() <= lOfLine && s[i] == ' ')
		{
			currentLine += currentWord += " ";
			currentWord.clear();
		}
		else
		{
			if (currentLine.length()-1 == currentLine.find_last_of(" "))
			{
				currentLine.erase(currentLine.find_last_of(" "));
			}
			if (currentLine.length() - 1 < lOfLine)
			{
				int nOfSpaces = 0;
				while (currentLine.length()  - 1 != lOfLine)
				{
					if (nOfSpaces <= lOfLine / 20)
					{
						currentLine.insert(currentLine.find_first_of(" "), " ");
						nOfSpaces++;
					}
					else
					{
						currentLine.insert(currentLine.find_last_of(" "), " ");
					}
				}
			}
			cout << currentLine << endl;
			currentLine.clear();
			i -= currentWord.length() + 1;
			currentWord.clear();
		}
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
