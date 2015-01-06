#include <stdio.h>

struct mark_t {
	unsigned long long date;
	int grade;
};

struct subject_t {
	char name[32];
	struct mark_t marks[32];
};

struct student_t {
	char name[100];
	int number;
	int grade;
	char class;
	struct subject_t subjects[12];
};

int main (int argc, char const *argv[]) {
	
	struct student_t students[2] = {
		{"Ivan", 3, 10, 'A'},
		{"Sashko", 4, 10, 'B'}
	};
	
	printf("%s\n", students[1].name);
	
	return 0;
}