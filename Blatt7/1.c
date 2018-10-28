#include <stdio.h>
#include <stdlib.h>

typedef struct DoubleNode {
	struct DoubleNode *next;
	double data;
} DoubleNode;

DoubleNode *head;

DoubleNode *insertFirst(DoubleNode *head, double c){
	DoubleNode *tmp;
	tmp = malloc(sizeof(DoubleNode));
	tmp->data=c;
	tmp->next=head;
	return tmp;
}

void printList(DoubleNode *head){
	DoubleNode *cursor;
	cursor=head;
	while (cursor != NULL){
		printf(" -> %f", cursor->data);
		cursor=cursor->next;
	}
	if (cursor == NULL){
		printf(" -> NULL\n");
	}

}

DoubleNode *insertLast(DoubleNode *head, double c){
	DoubleNode *tmp, *cursor;
	if (head==NULL)
		return insertFirst(head,c);
	else
		cursor=head;
		while (cursor->next !=NULL){
			cursor=cursor->next;
		}
		tmp=malloc(sizeof(DoubleNode));
		tmp->data=c;
		tmp->next=NULL;
		cursor->next=tmp;
		return head;
}

DoubleNode *reverseDoubleListCon(DoubleNode *head){
	DoubleNode *res, *tmp, *cell;
	cell=head;
	res=NULL;
	while (cell!=NULL){
		tmp=malloc(sizeof(DoubleNode));
		tmp->data=cell->data;
		tmp->next=res;
		res=tmp;
		cell=cell->next;
	}
	return res;
}

DoubleNode *reverseDoubleList(DoubleNode *head){
	DoubleNode *revChain, *chain,*cell;
	cell=head;
	revChain=NULL;
	while (cell!=NULL){
		chain=cell->next;
		cell->next=revChain;
		revChain=cell;
		cell=chain;
	}
	head=revChain;
}

double get(DoubleNode *head,int i){
	DoubleNode *tmp;
	tmp=head;
	int x;
	for (x=0;x<i;x++){
		tmp=tmp->next;
	}
	return tmp->data;
}

DoubleNode *delete(DoubleNode *head,int i){
	DoubleNode *tmp,*cursor;
	cursor=head;
	int x;
	for(x=0; x<i;x++){
		tmp=cursor;
		cursor=cursor->next;
	}
	if (cursor == NULL){			// if ende der liste
		return head;
	}
	else if (cursor == head){		// if anfang der liste
		head=tmp->next;
		free(cursor);
	}
	else {
		tmp->next=cursor->next;		//normales listen element
		free(cursor);
	}

	return head;
}

DoubleNode *insert(DoubleNode *head, double c, int i){
	DoubleNode *tmp, *cursor;
	cursor=head;
	tmp=head;
	int x;
	for(x=0; x<i;x++){						//find position for insert
		cursor=cursor->next;
	}
	if (cursor==head){						//IF first node in list
		insertFirst(head,c);
	}
	else if (cursor->next==NULL){			//IF last node in list
		insertLast(head,c);
	}
	else {
		while (tmp->next != cursor){		//insert
			tmp=tmp->next;
		}
		cursor=malloc(sizeof(DoubleNode));
		cursor->data=c;
		cursor->next=tmp->next;
		tmp->next=cursor;
		return head;
		}
}

int main(int argc, char const *argv[])
{
	double z;
	DoubleNode *L1 = NULL;

	L1 = insertFirst(L1,3);
	L1 = insertFirst(L1,5);
	L1 = insertLast(L1,7);
	printList(L1);
	L1 = insert(L1,9,2);
	printList(L1);
	L1 = delete(L1,3);
	printList(L1);
	z = get(L1,2);
	printf("%f\n", z);
	return 0;
}