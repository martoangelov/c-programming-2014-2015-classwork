#include <stdio.h>
#include <stdlib.h>

struct stack_t {
	int top_, size_;
	int *data_;
};

void init(struct stack_t*);
void release(struct stack_t*);
void push(struct stack_t*, int);
int pop(struct stack_t*);
int is_full(struct stack_t);
int is_empty(struct stack_t);
int peek(struct stack_t);

int main() {
	struct stack_t stack;
	
	init(&stack);
	
	printf("Is empty = %d\n", is_empty(stack));
	
	printf("Is full = %d\n", is_full(stack));
	
	push(&stack, 10);
	push(&stack, 20);
	push(&stack, 30);
	push(&stack, 40);
	push(&stack, 50);
	push(&stack, 60);
	push(&stack, 70);
	
	int val = pop(&stack);
	
	printf("val = %d, top = %d\n", val, stack.top_);
	
	printf("Is empty = %d\n", is_empty(stack));
	
	printf("Is full = %d\n", is_full(stack));
	
	release(&stack);
	
	return 0;
}

void init(struct stack_t *st) {
	st->top_ = 0;
	st->size_ = 5;
	st->data_ = (int*) malloc(5 * sizeof(int));
}

void release(struct stack_t *st) {
	free(st->data_);
	st->top_ = -1;
	st->size_ = 0;
}

int is_full(struct stack_t st) {
	return st.top_ == st.size_;
}

int is_empty(struct stack_t st) {
	return st.top_ == 0;
}

void push(struct stack_t *st, int val) {
	st->data_[st->top_++] = val;
}

int pop(struct stack_t *st) {
	return st->data_[--st->top_];
}

int peek(struct stack_t st) {
	return st.data_[st.top_ - 1];
}





