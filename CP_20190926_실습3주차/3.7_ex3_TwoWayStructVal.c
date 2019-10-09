#include<stdio.h>

struct student
{
	char* name;
	int age;
	char* program;
	char* subjects[5];
};

int main()
{
	struct student stu = {
		"Lucy",
		25,
		"CS",
		{"CS-01", "CS-02", "CS-03", "CS-04", "CS-05" }
	};

	struct student* ptr_stu = &stu;
	int i;

	printf("Accessing members using structure variable: \n\n");

	printf("Name: %s\n", stu.name);
	printf("Age: %d\n", stu.age);
	printf("Program enrolled: %s\n", stu.program);

	for (i = 0; i < 5; i++)
	{
		printf("Subject : %s \n", stu.subjects[i]);
	}

	printf("\n\nAccessing members using pointer variable: \n\n");

	printf("Name: %s\n", ptr_stu->name);
	printf("Age: %d\n", ptr_stu->age);
	printf("Program enrolled: %s\n", ptr_stu->program);

	for (i = 0; i < 5; i++)
	{
		printf("Subject : %s \n", ptr_stu->subjects[i]);
	}

	return 0;
}
