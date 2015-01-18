#include <stdio.h>

struct engine_t {
	int number;
};

struct wheel_t {
	int radius;
};

struct car_t {
	char name[400];
	struct engine_t engine;
	struct wheel_t tyres[4];
};

void print_car_name(struct car_t car) {
	printf("number: %s\n", car.name);
}

void print_engine_number(struct car_t car) {
	printf("engine number: %d\n", car.engine.number);
}

void change_engine_number(struct car_t *car_ptr) {
	(*car_ptr).engine.number = 42; // same as car_ptr->engine.number = 42
	printf("engine number changed!\n");
}

int main() {
	// int arr[500];
	

	struct car_t lada =
		{ "niva", { 404 }, { { 4 }, { 5 } } }; // static initialization


	print_car_name(lada); // creates a copy of our struct
	print_engine_number(lada);
	change_engine_number(&lada); // passes a pointer to it
	print_engine_number(lada);
	return 0;

}
