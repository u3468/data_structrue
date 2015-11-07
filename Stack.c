#include "basic.c"
Status InitStack(SqStack *S)
{
	S->base = (int *)malloc(STACK_INIT_SIZE * sizeof(int));
	if(!S->base)
		exit(OVERFLOW);
	S->top = S->base;
	S->stacksize = STACK_INIT_SIZE;
	return OK;
}
Status GetTop(SqStack S, int *e)
{
	if(S->top == S->base)
		return ERROR;
	e = *(S->top-1);
	return OK;
}
Status Push(SqStack *S, int e)
{
	if(S->top - S->base >= S->stacksize)
	{
		S->base = (int *)realloc(S->base,(S->stacksize+STACKINCREMENT) * sizeof(int));
		S->stacksize += STACKINCREMENT;
	}
	*S->top++ = e;
	return OK;
}
Status Pop(SqStack *S, int *e)
{
	if(S->top == S->base)
		return ERROR;
	e = *--S->top;
	return OK;
}
