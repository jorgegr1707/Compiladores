#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct row{
	struct row * sig;
	char name[50];
	int value;
}symbol;

symbol **tables;
int size;

symbol* create(){
	return NULL;
}

void insert(symbol** p_t, symbol* s){
	s->sig = (*p_t);
	(*p_t) = s;
}

symbol *lookup(symbol* t, char name[]){
	while((t != NULL) && (strcmp(name, t->name)))
		t = t->sig;
	return (t);
}

void print(symbol* t){
	while(t != NULL){
		printf("%s:%d\n", t->name, t->value);
		t = t->sig;
	}
}

/*void main(){
	tables = (symbol **)malloc(sizeof(symbol *));
	size = 0;
	tables[size++] = create();
	tables[size++] = create();
	symbol* object = lookup(tables[0], "hola");
	if(object == NULL){
		object = (symbol *)malloc(sizeof(symbol));
		strcpy(object->name, "hola");
		object->value = 2;
		insert(&tables[0], object);
	}

	object = lookup(tables[0], "hola2");
	if(object == NULL){
		object = (symbol *)malloc(sizeof(symbol));
		strcpy(object->name, "hola2");
		object->value = 4;
		insert(&tables[0], object);
	}

	object = lookup(tables[1], "hola3");
	if(object == NULL){
		object = (symbol *)malloc(sizeof(symbol));
		strcpy(object->name, "hola3");
		object->value = 6;
		insert(&tables[1], object);
	}
	for(int i = 0; i < size; i++){
		print(tables[i]);
	}
	free(object);
	for(int i = 0; i < size; i++){
		free(tables[i]);	
	}	
	free(tables);
}*/