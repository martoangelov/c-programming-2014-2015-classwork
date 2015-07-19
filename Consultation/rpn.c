#include <stdio.h>
#include <stdlib.h>

struct vector_t {
	int *data;
	int index, size;
};

void vector_init(struct vector_t*);
void vector_destroy(struct vector_t*);
int vector_get_size(struct vector_t);
void vector_resize(struct vector_t*);
int vector_at(struct vector_t, int index);
void vector_push_back(struct vector_t*, int value);
int vector_pop_back(struct vector_t*);

int main() {
	struct vector_t vector;
	char ch;
	
	while ((ch = getc()) != EOF) {
		int digit = ch - '0';
		if (digit >= 0 && digit <= 9 ) {
			vector_push_back(&vector, digit);
		} else if (ch == '+' || 
			ch == '-' ||
			ch == '*' ||
			ch == '/') {
				if (vector_get_size(vector) < 2) {
					return -1;
				}
			}
	}
	
	//init
	vector_init(&vector);
	
	
	
	//cleanup
	vector_destroy(&vector);
	
	return 0;
}

void vector_init(struct vector_t* v) {
	v->size = 5;
	v->index = 0;
	v->data = (int*) malloc(v->size * sizeof(int));
}

void vector_destroy(struct vector_t* v){
       // double free problem?
	free(v->data);
	v->size = 0;
	v->index = 0;
}

int vector_get_size(struct vector_t v) {
	return v.index;
}

void vector_push_back(struct vector_t* v, int value) {
	// is vector full?
	v->data[v->index++] = value;
}

int vector_at(struct vector_t v, int index) {
	// is valid index?
	return v.data[index];
}

int vector_pop_back(struct vector_t* v) {
	// is vector empty?
	return v->data[--v->index];
}

void vector_resize(struct vector_t*);
void vector_copy(struct vector_t* from, struct vector_t* to);