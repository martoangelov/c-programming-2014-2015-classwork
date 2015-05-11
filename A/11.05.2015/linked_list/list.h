#ifndef __LIST_H__
#define __LIST_H__

struct node_t {
	struct node_t *next;
	int data;
};

struct list_t {
	struct node_t *top;
	int size;
};

int list_init(struct list_t *l);
int list_size(struct list_t *l);
int list_push(struct list_t *l, int data);
int list_pop(struct list_t *l);
int list_destroy(struct list_t *l);

#endif