#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	vector<int> vec;
	int n, input1, input2;
	cin >> n >> input1 >> input2;
	vec.push_back(input1);
	vec.push_back(input2);

	for (int i = 2; i < n; i++)
		vec.push_back(vec[i - 2] + vec[i - 1]);
	
	cout << vec[n-1] << endl;
	return 0;
}