#include <stdio.h>

struct student
{
	int rollno;
	char name[20];
	float marks;
};

void main()
{
	struct student s1 = {1, "Lawan", 90};
	struct student s2 = {2, "Austin", 91};

	printf("Infor for Student 1:\n");
	printf("%d %s %.1f\n", s1.rollno, s1.name, s1.marks);
	printf("\nInfor for student 2: \n");
	printf("%d %s %.1f\n", s2.rollno, s2.name, s2.marks);
}
