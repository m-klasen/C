#include <stdio.h>
#include <stdlib.h>

typedef struct stack{
	struct stack *next;
	struct stack *previous;
	int data;

} stack;

stack *ptr, *end;

void print(stack *end){
	stack *cursor;
	cursor=end;
	while (cursor != NULL){
		printf(" -> %d", cursor->data);
		cursor=cursor->previous;
	}

}

stack *push(stack *ptr, int i){
	stack *tmp, *cursor;
	cursor=ptr;
	while (cursor->next !=NULL){
		cursor=cursor->next;
		}
	tmp=malloc(sizeof(stack));
	tmp->data=i;
	tmp->next=NULL;
	cursor->next=tmp;
	return tmp;
}

stack *pop(stack *ptr){
	stack *tmp,*cursor;
	cursor=ptr;
	while(cursor->next!=NULL){
		tmp=cursor;
		cursor=cursor->next;
	}
		tmp->next=cursor->next;		
		free(cursor);

	return ptr;
}

stack *peek(stack *ptr){
	stack *tmp;
	tmp=ptr;
	int x;
	while(tmp->next!=NULL){
		tmp=tmp->next;
	}
	return tmp->data;
}



int main(int argc, char const *argv[])
{
	stack *s1 =NULL;
	s1 = push(4);
	s1 = push(2);
	s1 = push(1);
	peek();
	print();
	pop();
	print();
	//isempty();
	pop();
	pop();
	//isempty();


	return 0;
}