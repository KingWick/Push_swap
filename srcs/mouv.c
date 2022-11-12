#include "../includes/pile.h"

void swap(list_t *stack)
{
	long tmp;

    tmp = stack->nbr; // tmp est egal a ma list pointant sur le nbr 
    stack->nbr = stack->next->nbr; // ma list pointant sur nbr et egal a ma list pointant sur lelement suivant 
    stack->next->nbr = tmp; // ma list pointant sur lelement suivant egal a tmp 
}

list_t *rotate(list_t *stack)
{
    
    if (!stack)
        return NULL;
    
    list_t *tmp;
    list_t *head;
    
    head = stack;
    tmp = stack->next;
    while (stack->next)
    {
        stack = stack->next;
    }
    stack->next = head;
    head->next = NULL;
    stack = tmp;

    return stack;
    // stack *last;

    // element = st;
    // while (element->next)
    // {
    //     last = element->next;
    // }

   // stack->next = stack->next->nbr;
}