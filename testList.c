#include <stdlib.h>
#include <stdio.h>
#include "list.h"

int main(void){
	int i;
	struct node_struct * l = NULL;
	for(i = 0; i < 10; i++){
		struct node_struct * nuevo ;
		nuevo = newNode(i);
		nuevo->next = l;
		l = nuevo;
	}
	struct node_struct* list_inv = inversa(l);
	printf("Longitud(recusivo): %d\n\n",longitud_recursivo(l));
	printf("Longitud(iterativo): %d\n\n",longitud_iterativo(l));
	printf("Elemento maximo de la lista: %d\n\n",max(l));
	printf("La lista: \n\n");
	print_list(l);
	printf("\n\n");
	printf("Inversa de la lista: \n\n");
	print_list(list_inv);
	printf("\n");

	struct node_struct * next;
	while(l != NULL){
		next = l->next;
		free(l);
		l = next;
	}
	return 0;
}