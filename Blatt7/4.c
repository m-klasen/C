#include <stdio.h>
#include <stduio.h>

typedef struct {
	struct node *left;
	struct node *right;
	int data;
} node;

node *root;

void printpre(node *root){

}

void insert(int i){
	node *tmp, *current, *parent;
	tmp->data=data;
	tmp->left=NULL;
	tmp->right=NULL;

	if (root==NULL){
		rot = tmp;
	}
	else {
		current = root;
		parent = NULL;

	while(1){

		if (data < parent->data){		//goto left 
			current = current->left;
			if (current==NULL) {		//insert left
				parent->left = tmp;
				return;
			}
		}
		else {							//goto right
			current = current->right;
			if (current == NULL){		//insert
				parent->right = tmp;
				return;
			}
		}
	}
	}

}

int main(int argc, char const *argv[])
{
	return 0;
}