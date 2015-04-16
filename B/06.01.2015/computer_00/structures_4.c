#include <stdio.h>

struct point_t {
	int x;
	int y;
};

struct rect_t {
	struct point_t pos;
	struct point_t size;
};

struct rect_t rectangle(
	struct point_t pos, 
	struct point_t size,
	struct point_t *center);

int main() {
	struct point_t pos = {0,0};
	struct point_t size = {100, 100};
	
	struct point_t center;
	
	rectangle(pos, size, &center);
	
	printf("center(%d, %d)\n", center.x, center.y);
	
	return 0;
}

struct rect_t rectangle(
	struct point_t pos, 
	struct point_t size,
	struct point_t *center) {
			
		struct rect_t rect;
		
		rect.pos = pos;
		rect.size = size;
		
		center->x = (pos.x + size.x) / 2;
		center->y = (pos.y + size.y) / 2;
		
		return rect;
}
