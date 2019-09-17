#include <iostream>

using namespace std;

void main()
{
	char name[10];
	char major[10];
	
	cout << "What's your name? : ";
	cin.get(name, 10);
	fflush(stdin);

	cout << "major? ";
	cin.get(major, 10);
	cout << "\n\nName : " << name << " Major : " << major << endl;
}

