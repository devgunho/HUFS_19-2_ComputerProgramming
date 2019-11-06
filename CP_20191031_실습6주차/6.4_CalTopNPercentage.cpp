#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Person {
private:
	string name;
	int score;
public:
	Person(string n, int s) {
		name = n;
		score = s;
	}
	string get_name() { return name; }
	int get_score() { return score; }
};

bool compare(Person& p, Person& q)
{
	return p.get_score() > q.get_score();
}

int main()
{
	int n;
	cin >> n;
	vector<Person> objArray;
	vector<double> save_score_per;
	int scoreArr[10001] = { 0, };
	for (int i = 0; i < n; i++)
	{
		string name;
		int score;
		cin >> name >> score;

		Person obj(name, score);
		objArray.push_back(obj);
		scoreArr[score]++;
	}

	sort(objArray.begin(), objArray.end(), compare);

	int cnt = 0;
	if(n==1)
		save_score_per.push_back(0.0);
	else{
		for (int i = 10000; i >= 0; i--)
		{
			if (scoreArr[i] != 0)
			{
				cnt += scoreArr[i];
				for (int j = 0; j < scoreArr[i]; j++)
					save_score_per.push_back((double)(cnt-1) * (100.0 / (double)(n - 1)));
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << objArray[i].get_name() << " " << objArray[i].get_score();
		printf(" %.2f%%\n", save_score_per[i]);
	}

	return 0;
}