#include "../includes/pile.h"

list_t *swap(list_t *stack)
{
	int tmp;

    tmp = stack->nbr; 
    stack->nbr = stack->next->nbr;
    stack->next->nbr = tmp;
    return (stack);
}

list_t *rotate(list_t *stack)
{
    if(!stack)
        return NULL;
    list_t *tmp;
    list_t *head;
    
    head = stack;
    tmp = stack->next;
    
    while(stack->next)
    {
        stack = stack->next;
    }
    stack->next = head;
    head->next = NULL;

    return tmp;
}

list_t *reverse_rotate(list_t *stack)
{
    if(!stack)
        return NULL;
    list_t    *dernier;
    list_t    *avantder;

    dernier = stack;
    avantder = stack;
    while (dernier->next)
    {
        dernier = dernier->next;
    }
    while (avantder->next->next)            //Revoir sont fonctionement
            avantder = avantder->next;
    dernier->next = stack;
    avantder->next = NULL;
    return (dernier);
}

list_t *push_st(list_t *stack_a, list_t *stack_b)
{
    list_t *tmp;

    tmp = stack_a;
    stack_a = stack_a->next; 
    tmp->next = stack_b;
    stack_b = tmp;
    return stack_a;
}