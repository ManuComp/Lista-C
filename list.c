#include <stdio.h>
#include "list.h"
#include <stdlib.h>
#include <assert.h>

struct node_struct * newNode(int v){
	struct node_struct *n = (struct node_struct*) malloc(sizeof(struct node_struct));
	assert(n != NULL);
	(*n).value = v;
	n->value = v;
	n->next = NULL;
	return n;
}

void deleteNode(struct node_struct *n){
	free(n);
}

void print_list(struct node_struct* l){
	printf("[");
	for(; l != NULL; l= l->next){
		printf("%d%c ", l->value, l->next != NULL ? ',': ']');
	}
}

int longitud_iterativo(struct node_struct * n){
	int i = 0;
	while(n != NULL){
		i += 1;
		n = n->next;
	}
	return i;
}

int longitud_recursivo(struct node_struct * n){
	if(n == NULL)
		return 0;
	return 1 + longitud_recursivo(n->next);
}

int max(struct node_struct* n){
	int max;
	max = n->value;
	n = n->next;
	while(n != NULL){
		if(n->value > max)
			max = n->value;
		n = n->next;
	}
	return max;
}

struct node_struct * inversa(struct node_struct* n){
	struct node_struct * aux = (struct node_struct *) malloc (sizeof(struct node_struct*));
	struct node_struct * inv = NULL;
	aux = n;
	while(aux != NULL){
		struct node_struct * nuevo ;
		nuevo = newNode(aux->value);
		nuevo->next = inv;
		inv = nuevo;
		aux = aux->next;	
	}
	return inv;

}