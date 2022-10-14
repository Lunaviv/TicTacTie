#include <iostream>
#include <vector>

using namespace std;

void greet();
void StartGame(bool);

int main()
{
	int gamesize = 0;
	int PlayerNum = 0;
	vector<char> PlayerChars;
	char PlayerChar;
	bool waiting = true;

	greet();
	StartGame(waiting);

	for (int i = 0; i < PlayerNum; i++)
	{
		cout << "Player" << i + 1 << endl;
		cout << "Select Your Char" << endl;
		cin >> PlayerChar;
		PlayerChars.push_back(PlayerChar);
		
	}


	return 0;
}

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
		 bool waiting;
		 char answer;
		 cin >> answer;
		 if (answer == 89 || answer == 121) // Y or y
		 {
			 waiting = false;
		 }
		 else if (answer == 78 || answer == 110) // N or n
		 {
			 waiting = false;
		 }
		 else
		 {
			 cout << "               Game Start[Y]          Quit[N]" << endl;
		 }
	 }
}