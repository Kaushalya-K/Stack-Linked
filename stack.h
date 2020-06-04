#include "queue.h"
#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

struct stack
{
    int size;
    int top;
    struct node **s;
};

void stackcreate(struct stack *st,int size)
{
    st->size=size;
    st->top=-1;
    st->s=(struct node**)malloc(st->size*sizeof(struct node *));
}

void push(struct stack *st,struct node *x)
{
    if(st->top == st->size-1)
    {
        printf("Stack overflow\n");
    }
    else
    {
        st->top++;
        st->s[st->top]=x;
    }
}

struct node *pop(struct stack *st)
{
    struct node *x=-1;
    if(st->top==-1)
    {
        printf("Stack underflow\n");
    }
    else
    {
        x=st->s[st->top--];
    }
    return x;
}

int isemptystack(struct stack st)
{
    if(st.top==-1)
    {
        return 1;
    }
    else
        return 0;
}
int isfullstack(struct stack st)
{
    return st.top==st.size-1;
}


#endif // STACK_H_INCLUDED
