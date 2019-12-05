#include <iostream>
using namespace std;

class Person
{
protected:
	string name_;
	int age_;
public:
	Person(const string& name, int age);	// 기초 클래스 생성자의 선언 
	void ShowPersonInfo();
};

Person::Person(const string& name, int age)	// 기초 클래스 생성자의 정의 
{
	name_ = name;
	age_ = age;
}

void Person::ShowPersonInfo()
{
	cout << "이름은 " << name_ << "이고, 나이는 " << age_ << "살입니다." << endl;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Student : public Person
{
private:
	int student_id_;
public:
	Student(int sid, const string& name, int age);	// 파생 클래스 생성자의 선언
	void ShowPersonInfo();
};

Student::Student(int sid, const string& name, int age) : Person(name, age)	// 파생 클래스 생성자의 정의 
{
	student_id_ = sid;
}

void Student::ShowPersonInfo()
{
	cout << name_ <<" 학생의 학번은 " << student_id_ << "입니다." << endl;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Professor : public Person
{
private:
	int professor_id_;
	string major;
public:
	Professor(int pid, string m, const string& name, int age);	// 파생 클래스 생성자의 선언
	void ShowPersonInfo();
};

Professor::Professor(int pid, string m, const string& name, int age) : Person(name, age)	// 파생 클래스 생성자의 정의 
{
	professor_id_ = pid;
	major = m;
}

void Professor::ShowPersonInfo()
{
	cout << "교수님의 이름은 " << name_ << ", 전공은 " << major << "입니다." << endl;
}

int main(void)
{
	Person lee("이순신", 25);
	lee.ShowPersonInfo();
	Student hong(123456789, "홍길동", 20);
	hong.ShowPersonInfo();
	Professor kim(123456777, "컴퓨터전자시스템공학부", "김길동", 50);
	kim.ShowPersonInfo();

	return 0;
}