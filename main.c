#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "dbFunctions.h"

int main(int argc, char *argv[]) {
	if (argc == 1) {
		printf("No arguments given.\n");
		return 0;
	} if (argc != 2){
		printf("Too many arguments given.\n");
		return 0;
	}
	node_p * parent = NULL;
	node_c * child = NULL;
	parent = malloc(sizeof(node_p));
	child = malloc(sizeof(node_c));


	parent->element = "test";
	parent->itemid = 0;
	parent->next = NULL;

	add_parent_node(parent, 1, "Username");
	add_parent_node(parent, 2, "Password");
	
	child->var = 789;
	child->parentid = 2;
	child->itemid = 0;
	child->element = "dafuq";

	add_child(child, 123, "testuser", 1, 1);
	add_child(child, 456, "testpass", 2, 1);
	
	print_parent(parent, child, "Username");
	return 0;
}

/*
if (parent && child == NULL) {
	return 1;
}
*/