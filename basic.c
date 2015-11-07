#include <stdio.h>
#include <stdlib.h>
#define TURE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2
#define LIST_INIT_SIZE 100
#define LISTINCREMENT 10
#define STACK_INIT_SIZE
#define STACKINCREMENT 10
typedef struct
{
	int *elem;
	int length;
	int listsize;
}SqList;
typedef int Status;
typedef struct LNode
{
	int data;
	struct LNode *next;
}LNode, *LinkList;
typedef struct
{
	int *base;
	int *top;
	int stacksize;
}SqStack;
typedef struct BiTNode
{
	char data;
	struct BiTNode  *lchild, *rchild; 
}BiTNode, *BiTree;
