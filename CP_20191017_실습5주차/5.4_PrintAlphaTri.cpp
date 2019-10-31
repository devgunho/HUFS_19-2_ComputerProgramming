#include <iostream>
using namespace std;
class alphaTri {
private:
	int height;
public:

	alphaTri()
	{
		height = 3;
	}

	void setHeight(int val)
	{
		height = val;
	}

	void printAlphaTri()
	{
		int i, j, cal;
		char alpha = 'A';

		for (i = 1; i <= height; i++)
		{
			printf(" ");
			for (j = i; j < height; j++)
			{
				printf(" ");
			}
			alpha = 'A';
			cal = alpha;
			for (j = 0; j < i; j++)
			{
				if (alpha <= 'Z')
				{
					printf("%c ", alpha++);
					cal++;
				}
				else
				{
					printf("%c ", 'Z' - (cal - alpha + 1));
					cal++;
				}
			}
			cout << endl;
		}
		cout << endl;
	}
};

int main() {
	alphaTri a;

	int input;
	cin >> input;

	alphaTri aaa;
	aaa.setHeight(input);

	a.printAlphaTri();
	aaa.printAlphaTri();

	return 0;
}