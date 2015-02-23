#include <stdio.h>
#include <stdlib.h>
// index, size, data

// [0, 0, 0, 0, 0]
// [0, -1, -2, -3, -4 ...]

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
	vector_init(&vector);

	int i;
	for(i = 0; i < 3; i++) {
		vector_push_back(&vector, -i);
	}

	vector_pop_back(&vector);

	for(i = 0; i < vector_get_size(vector); ++i) {
		printf("%d ", vector_at(vector, i));
	}
	printf("\n");

	struct vector_t v2 = vector;
	vector_destroy(&vector);
	for(int i = 0; i < vector_get_size(v2); ++i) {
		printf("%d ", vector_at(v2, i));
	}
	printf("\n");
	vector_destroy(&v2);


	return 0;
}

void vector_init(struct vector_t* v) {
	v->size = 5;
	v->index = 0;
	v->data = (int*) malloc(v->size * sizeof(int));
}

void vector_destroy(struct vector_t* v){
	free(v->data);
	v->size = 0;
	v->index = 0;
}

int vector_get_size(struct vector_t v) {
	return v.index;
}

void vector_push_back(struct vector_t* v, int value) {
	v->data[v->index++] = value;
}

int vector_at(struct vector_t v, int index) {
	return v.data[index];
}

int vector_pop_back(struct vector_t* v) {
	return v->data[--v->index];
}

void vector_resize(struct vector_t*);
