#include <stdio.h>
#include "list.h"

int main() {
	
	struct list_t *l;
	
	list_init(l);
	
	int e;
	for (e = 0; e < 10; e++) {
		// FIXME:
		list_push(l, e * 10);
	}
	
	while(list_size(l)) {
		printf("Element[%d] = %d\n",
			list_size(l), list_pop(l));
	}
	
	return 0;
}