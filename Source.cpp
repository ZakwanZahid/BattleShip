#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
#include<fstream>
using namespace std;
const int easyMode = 8;
const int medMode = 12;
const int hardMode = 15;

char easyArr[easyMode][easyMode] = { 0 };
char medArr[medMode][medMode] = { 0 };
char hardArr[hardMode][hardMode] = { 0 };
//void setShipsEasy() 
//{
//	//This Function Will setShips for playerVsMachine
//	//For Easy Mod between playerAndMachine
//	int s = 0;
//	while (s < easyMode)
//	{
//		int x = 0, y = 0;
//		x = (rand() % easyMode) + 1;
//		y = (rand() % easyMode) + 1;
//		if (easyArr[x][y] != 1)
//		{
//			s++;
//			easyArr[x][y] = 1;
//		}
//
//
//	}
//
//
//}

void easyBoard()
{                                                   
	system("cls");                                      //Playboard for Display
	cout << "Its EASY-MODE." << endl;
	cout << "Best of Luck!" << endl; 
	char ch = '-';
	for (int i = 0; i < easyMode; i++)
	{
		for (int j = 0; j < easyMode; j++)
		{
				easyArr[i][j] = ch;
		}
		//ch++;
	}
	int a = 1;
	for (int i = 0; i < easyMode; i++)             //displayingBoard
	{
		cout << a;
		for (int j = 0; j < easyMode; j++)
		{
			cout <<" " << easyArr[i][j] << "   ";
			
		}
		cout << endl;
		a++;
	}
	system("pause");
}

void medBoard()
{

	system("cls");                                      //Playboard for Display
	cout << "Its MEDIUM-MODE." << endl;
	cout << "Best of Luck!" << endl;
	char ch = 'A';
	for (int i = 0; i < medMode; i++)
	{
		for (int j = 0; j < medMode; j++)
		{
			medArr[i][j] = 'A';
		}
		ch++;
	}
	int a = 0;
	for (int i = 0; i < medMode; i++)             //displayingBoard
	{
		for (int j = 0; j < medMode; j++)
		{
			cout << a << medArr[i][j] << "     ";
			a++;
		}
		cout << endl;
	}
	system("pause");
}
void hardBoard() {
	system("cls");                                      //Playboard for Display
	cout << "Its HARD-MODE." << endl;
	cout << "Best of Luck!" << endl;
	char ch = 'A';
	for (int i = 0; i < hardMode; i++)         //initializing
	{
		for (int j = 0; j < hardMode; j++)
		{
			hardArr[i][j] = 'A';
		}
		ch++;
	}
	int a = 0;
	for (int i = 0; i < hardMode; i++)             //displayingBoard
	{
		for (int j = 0; j < hardMode; j++)
		{
			cout << a << hardArr[i][j] << "     ";
			a++;
		}
		cout << endl;
	}
	system("pause");
}
//Play Game Modes(Easy, Medium and Hard) Starting from Here
//Also Player Vs. Player AND Player Vs. Medium
void playerVsPlayer() {
	int d;
	cout << "Press 1 For Easy Mode" << endl;
	cout << "Press 2 For Medium Mode" << endl;
	cout << "Press 3 For Hard Mode" << endl;
	cin >> d;
	if (d == 1)
	{
		easyBoard();
	}
	else if (d == 2)
	{
		medBoard();
	}
	else if (d == 3)
	{
		hardBoard();
	}
	else {
		cout << "Invalid Input. Enter Again." << endl;
		cin >> d;
	}


}
void playerVsMachine(){
	system("cls");
		int c;
		cout << "Press 1 For Easy Mode" << endl;
		cout << "Press 2 For Medium Mode" << endl;
		cout << "Press 3 For Hard Mode" << endl;
		cin >> c;
		while (c > 0)
		{
			if (c == 1)
			{
				easyBoard();
				
			}
			else if (c == 2)
			{
				medBoard();
			}
			else if (c == 3)
			{
				hardBoard();
			}
			else
			{
				cout << "Invalid Input. Enter Again or Press -1 to Exit" << endl;
				cin >> c;
			}
		}
		}
int toss()
{
	srand(time(NULL));
	int x = 0;                 //tossing for first player taker
	x = (rand() % 2) + 1;
	if (x == 1)
		return 1;
	else
		return 2;
}

void instructs()
{
	cout << "1.Each ship must be placed horizontally or vertically across grid spaces" << endl;
	cout << "___________________________________________________________________________" << endl;
	cout << "2.Ships Cannot be Overlapped" << endl;
	cout << "____________________________________________________________________________" << endl;
	cout << "3.You cannot change the position of the ships after the game begins" << endl;
	cout << "____________________________________________________________________________" << endl;
	cout << "4.Place each ship in any horizontal or vertical position but not diagonally." << endl;
	cout << "____________________________________________________________________________" << endl;
}
void credits()
{
	cout <<setw(30)<< "Game Made by " << endl;
	cout<< setw(30) <<"Zakwan _ 21F-9301" << endl;
	cout<< setw(30) <<"Arsalan Arsahad _ 21F-9297" << endl;
	cout << setw(30)<<"FAST-NUCES CFD Campus" << endl;
}
void mainMenu(int x) {


	system("cls");
	if (x == 1)
	{
		int m;
		cout << "Press 1 for PlayerVsPlayer." << endl;
		cout << "Press 2 for PlayerVsMachine." << endl;
		cin >> m;
		while (m > 0)
		{
			if (m == 1)
			{
				playerVsPlayer();
			}
			else if (m == 2)
			{
				playerVsMachine();
			}
			else
			{
				cout << "Invalid Input. Enter Again Or Press -1 to Exit" << endl;
				cin >> m;
			}
		}
	}
	if (x == 2)
	{
		credits();
	}
	if (x == 3)
	{
		instructs();
	}

}

int main() {


	int num;
	cout << "Press 1 to Play Game OR Press negative value to Exit" << endl;
	cin >> num;
		while (num != -1)
		{
			cout << "_____________________________________________________" << endl;
			cout << "1) Play Game" << endl;
			cout << "2) Credits" << endl;
			cout << "3) Instructions " << endl;
			cout << "4) Score" << endl;
			cout << "5) Exit" << endl;
			cin >> num;
			if (num == 1 || num == 2 || num == 3 || num == 4 || num == 4 || num == 5)
				{
					mainMenu(num);
				}
			else
				{
				cout << "You Entered Invalid Number. Enter Again" << endl;
				cin >> num;
				}
		}
	}