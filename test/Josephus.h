#ifndef Josephus_h
#define Josephus_h
#include<stdio.h>
#include<malloc.h>

#define n 11
#define m 3 

typedef struct node {
    int no;
    struct node *next;
}node;







void CreatList();
void Delect();
void Print();

#endif
