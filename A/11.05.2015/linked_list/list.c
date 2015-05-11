#include "list.h"
#include <stdlib.h>

int list_init(struct list_t *l) {
	l->top = NULL;
	l->size = 0;
	return 0;
}

int list_size(struct list_t *l) {
	return l->size;
}

int list_push(struct list_t *l, int data) {
	// FIXME: dynamic memory
	struct node_t *next;
	next.data = data;
	next.next = l->top;
	l->top = &next;
	l->size++;
	return 0;
}

int list_pop(struct list_t *l) {
	if (list_size(l) > 0) {
		// FIXME: free moje bi?
		int val = l->top->data;
		l->top = l->top->next;
		l->size--;
		return val;
	}
	
	return -1;
}

int list_destroy(struct list_t *l) {
	while(list_size(l)) {
		list_pop(l);
	}
	return 0;
}