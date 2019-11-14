#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
	string name, ID;
public:
	Employee(const string n = "", const string i = "") :name(n), ID(i) {}
	void setName(const string n) { name = n; }
	string getName() const { return name; }
	void setID(const string i) { ID = i; }
	string getID() const { return ID; }
};

class Department {
private:
	string name;
	Employee* TeamLeader;
public:
	Department(string n = "") :name(n), TeamLeader(nullptr) {}
	void setTeamLeader(Employee* TL) { TeamLeader = TL; }
	void print() const {
		cout << name;
		if (TeamLeader != nullptr)
		{
			cout << " ÆÀÀåÀº " << TeamLeader->getName() << endl;
			cout << "ÆÀÀåÀÇ ID´Â " << TeamLeader->getID() << endl;
		}
		else
			cout << " ÆÀÀåÀº ÇöÀç ¾ø½À´Ï´Ù." << endl;
	}
};

int main()
{
	string str1, str2, str3;
	cin >> str1 >> str2 >> str3;
	Department dp(str1);
	Employee* p = new Employee(str2, str3);
	dp.setTeamLeader(p);
	dp.print();

	p = nullptr;
	dp.setTeamLeader(p);
	dp.print();

	delete p;
	return 0;
}