#ifndef NANA_LIST_H
#define NANA_LIST_H

#include <stdio.h>
#include <stdlib.h>

typedef struct node_s
{
	int data;
	struct node_s *next;
} node_t;

void print_list(node_t *head);
void add_node_at_head(node_t **, int);

#endif