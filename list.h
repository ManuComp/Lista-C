struct node_struct{
	int value;
	struct node_struct* next;
};



struct node_struct * newNode(int v);

void deleteNode(struct node_struct *n);

void print_list(struct node_struct* l);

int longitud_iterativo(struct node_struct* n);

int longitud_recursivo(struct node_struct* n);

int max(struct node_struct* n);

struct node_struct* inversa(struct node_struct* n);
