#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "dbFunctions.h"
#include "main.h"

int main(int argc, char *argv[]) {
	if (argc > 1) {
		printf("Do not run the program with arguments!");
		return 0;
	}
	// Init and malloc parent and child nodes
	node_p * parent = NULL;
	node_c * child = NULL;
	parent = malloc(sizeof(node_p));
	child = malloc(sizeof(node_c));

	// Default parent and child node, will not be printed to database file.
	parent->element[0] = "test";
	parent->itemid = 0;
	parent->next = NULL;
	
	child->var = 123;
	child->parentid = 0;
	child->itemid = 0;
	child->element = "test";
	child->next = NULL;
	
	print_parent(parent, child);
	
	init(parent, child);
	
	return 0;
}