#include <stdio.h>

typedef struct mark_t mark;
typedef int byte;
typedef byte thisisaninteger;

struct mark_t {
	unsigned long long date;
	int mark;
};

struct subject_t {
	char name[32];
	mark marks[42];
};

struct student_t {
	char name[64];
	int grade;
	int class;
	int number;
	struct subject_t subjects[12];
};

int main() {
	
	return 0;
}