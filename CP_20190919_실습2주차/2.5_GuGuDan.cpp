#include <iostream>
using namespace std;

#define HEIGHT 100
#define WIDTH 9

int main() {
	int table[HEIGHT][WIDTH];
	int r, c;
	int input = 0;
	cin >> input;

	for (r = 0; r < HEIGHT; r++)
		for (c = 0; c < WIDTH; c++)
			table[r][c] = (r + 1) * (c + 1);

	for (r = 0; r < HEIGHT; r++) {
		if (r == input) break;
		for (c = 0; c < WIDTH; c++) {
			cout << table[r][c] << ", ";
		}
		cout << endl;
	}

	return 0;
}


