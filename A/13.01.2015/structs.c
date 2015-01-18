#include <stdio.h>

struct display_t {
	int refresh_rate;
};

struct cpu_t {
	int mhz;
};

struct laptop_t {
	char name[20];
	struct display_t monitor;
	struct cpu_t cpu;
};

void print_laptop_name(struct laptop_t laptop) {
	printf("laptop name: %s\n", laptop.name);
}


void print_laptop_cpu_mhz(struct laptop_t laptop) {
	printf("laptop cpu mhz: %d\n", laptop.cpu.mhz);
}

void overclock(struct laptop_t *laptop_ptr) {
	(*laptop_ptr).cpu.mhz += 1000;
}

int main() {

	struct laptop_t lenovo = { "edge", { 72 }, { 2200 } };

	print_laptop_name(lenovo);

	print_laptop_cpu_mhz(lenovo);
	overclock(&lenovo);
	print_laptop_cpu_mhz(lenovo);


	return 0;
}