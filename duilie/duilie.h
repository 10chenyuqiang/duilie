#ifndef duilie_h
#define duilie_h
#include<stdlib.h>
#include<stdio.h>
#include<malloc.h>

typedef int dataType;
typedef struct node {
	dataType data;
	struct node *left, *right;
}Deque,node;

Deque* create();
int size();
int empty();
dataType front();
dataType back();
void push_front();
void push_back();
void pop_front();
void pop_back();
void clear();
void print();

#endif
