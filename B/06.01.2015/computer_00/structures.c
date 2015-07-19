#include <stdio.h>

//void line(int x1, int y1, int x2, int y2, int *line_x, int *line_y);

struct point_t {
	int x;
	int y;
};

struct rect_t {
	struct point_t top_left;
	struct point_t width_height;
};

struct point_t center(struct point_t one, struct point_t two) {
	struct point_t center = {
		(one.x - two.x) / 2, (one.y - two.y) / 2
	};
	
	return center;
}

int main() {
	struct point_t pt1 = {0, 0}, pt2;
	struct rect_t rt1 = {1, 2, 2, 1};
	
	//init
	pt2.x = 1;
	pt2.y = 5;
	
	printf("x1 = %d, y1 = %d\n", pt1.x, pt1.y);
	printf("x2 = %d, y2 = %d\n", pt2.x, pt2.y);
	
	printf("x = %d, y = %d, w = %d, h = %d\n",
	rt1.top_left.x, rt1.top_left.y, rt1.width_height.x, rt1.width_height.y);
	
	rt1.top_left.x = 2;
	
	printf("x = %d, y = %d, w = %d, h = %d\n",
	rt1.top_left.x, rt1.top_left.y, rt1.width_height.x, rt1.width_height.y);
	
	return 0;
}