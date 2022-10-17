#include <iostream>
#include <vector>
#include "Functions.h"
#include <ctype.h>

using namespace std;

void greet()
{
	cout << "888   d8b        888                   888                    " << endl;
	cout << "888   Y8P        888                   888                    " << endl;
	cout << "888              888                   888                    " << endl;
	cout << "888888888 .d8888b888888 8888b.  .d8888b888888 .d88b.  .d88b.  " << endl;
	cout << "888   888d88P\"   888       \"88bd88P\"   888   d88\"\"88bd8P  Y8b " << endl;
	cout << "888   888888     888   .d888888888     888   888  88888888888 " << endl;
	cout << "Y88b. 888Y88b.   Y88b. 888  888Y88b.   Y88b. Y88..88PY8b.     " << endl;
	cout << " \"Y888888 \"Y8888P \"Y888\"Y888888 \"Y8888P \"Y888 \"Y88P\"  \"Y8888" << endl;
	cout << endl << endl;
}

void StartGame(bool waiting)
{

	cout << "               Game Start[Y]          Quit[N]" << endl;

	while (waiting)
	{
		char answer;
		cin >> answer;
		if (answer == 'Y' || answer == 'y') // Y or y
		{
			waiting = false;
		}
		else if (answer == 'N' || answer == 'n') // N or n
		{
			waiting = false;
		
		}
		else
		{
			cout << "               Game Start[Y]          Quit[N]" << endl;
		}
	}
}



//Select the BoardSize
int AskGameSize()
{
	int gamesize = 0;
	cout << "How big the board should be?" << endl;
	cout << "Pick a Number between 3 and 5" << endl;

	bool valid = false;

	do {
		cin >> gamesize;
		if (isdigit(gamesize) == false)
		{
			cout << "Please Enter a Number" << endl;
			
		}
		else if (5 < gamesize || gamesize < 3)
		{
			cout << "Please Select a valid Number" << endl;
			
		}
		else
		{
			valid = true;
		}
	} while (valid == false);
		
		return gamesize;
	
}

void GameSetting()
{
	
	int PlayerNum = 0;
	vector<char> PlayerChars;
	char PlayerChar;


	AskGameSize();

	//Select the Number of Players
	cout << "How many Players are playing?" << endl;
	cin >> PlayerNum;

	if (isdigit(PlayerNum))
	{
		cin.ignore(std::numeric_limits<std::streamsize>::max());
	}
	else
	{
		cout << "Please Select a Number";
		cin.ignore(std::numeric_limits<std::streamsize>::max());
	}

	for (int i = 0; i < PlayerNum; i++)
	{
		cout << "Player" << i + 1 << endl;
		cout << "Select Your Char" << endl;
		cin >> PlayerChar;
		PlayerChars.push_back(PlayerChar);

	}
}