#include <stdio.h>

struct point {
	int x;
	int y;
};

struct rect {
	struct point pos;
	struct point size;
};

struct rect create_rect(struct point pos, struct point size, struct point *center) {
	struct rect result;
	
	result.pos = pos;
	result.size = size;
	
	center->x = (pos.x + size.x) / 2;
	center->y = (pos.y + size.y) / 2;

	return result;
}

int main() {
	struct point pos = {0, 0}, size, center;	
	struct rect rectangle = {0, 0, 0, 0};
	struct point *size_ptr;
	
	size_ptr = &size;
	size_ptr->x = 100;
	
	++size_ptr->x; // == ++(size_ptr->x)
	
	// (++size_ptr)->x;
	// ++(size_ptr->x);
		
	size.x = 100;
	size.y = 100;
	
	rectangle = create_rect(pos, size, &center);
	
	printf("center(%d, %d)\n", center.x, center.y);
	
	// valid rectangle.size.x = 0;
	
	//printf("x = %d, y = %d, w = %d, h = %d\n",
	//pos.x, pos.y, size.x, size.y);
	
	return 0;
}