#include<stdio.h>
#include<stdlib.h>

typedef struct slinkedlist
{
	int data;
	struct slinkedlist *next;
} Node;

Node* CreateNode();
Node* Createlist();
