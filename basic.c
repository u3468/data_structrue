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
typedef struct
{
	int *elem;
	int length;
	int listsize;
}SqList;
typedef int Status;
typedef struct BiTNode
{
	char data;
	struct BiTNode  *lchild, *rchild; 
}BiTNode, *BiTree;
