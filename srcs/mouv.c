#include "../includes/pile.h"

list_t *swap(list_t *stack)
{
	int tmp;

    tmp = stack->nbr; 
    stack->nbr = stack->next->nbr;
    stack->next->nbr = tmp;
    ft_putstr("sa\n");
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
    ft_putstr("ra\n");
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
    while (avantder->next->next)
            avantder = avantder->next;
    dernier->next = stack;
    avantder->next = NULL;
    ft_putstr("rra\n");
    return (dernier);
}

list_t *push_st(list_t *stack_a, list_t *stack_b)
{
    list_t *tmp;

    tmp = stack_a;
    stack_a = stack_a->next; 
    tmp->next = stack_b;
    stack_b = tmp;
    ft_putstr("pb\n");
    return stack_a;
}