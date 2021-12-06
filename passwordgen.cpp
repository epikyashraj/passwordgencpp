#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <time.h>
#include <stdlib.h>
#include <random>
using namespace std;

string password_generator(int len)
{
	int characters;
	string str = "0123456789`~!@#$%^&*()_+=-,.<>?;:'\"[]{}ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	string newstring;
	int pos;

	while (newstring.size() != len)
	{
		pos = ((rand () % str.size()));
		newstring += str.substr(pos, 1);
	}

	return newstring;	
}

int main()
{
	int choice;

	cout << "Welcome To Password Generator Program\n";
	cout << "How Many Characters You Want In Your Password: ";

	cin >> choice;

	srand(time(NULL));

	string password_generated = password_generator(choice);

	cout << "Ok Here Is Your Password: " << password_generated << endl;

	string save = password_generated;
}






// Code By Yashraj Sharma
// Intagram = epikyash
// Youtube = EpikYash
