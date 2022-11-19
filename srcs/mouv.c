#include "../includes/pile.h"

list_t *swap(list_t *stack)
{
	list_t *tmp;

    tmp = stack; // tmp est egal a ma list pointant sur le nbr 
    stack = stack->next; // ma list pointant sur nbr et egal a ma list pointant sur lelement suivant 
    stack->next = tmp; // ma list pointant sur lelement suivant egal a tmp 
    return (stack);
}

list_t *rotate(list_t *stack)
{
    list_t *tmp;
    list_t *head;
    
    head = stack; //recupere le premier element dl'a stack (stack pointe vers sont adresse(Du coup sa premiere case))
    tmp = stack->next; // recupere lelement suivant de la stack
    //printf("%d\n", stack->nbr);
    //printf("%dn", stack->next->nbr);
    while(stack->next) //tant que l'element suivant de l'element actuel n'est pas le dernier 
    {
        //printf("%d", stack->nbr);
        stack = stack->next;
    }
    stack->next = head; //stack->next vaut ma liste une fois parcouru
    stack = tmp;
    head->next = NULL; // ma tete pointe ver null 
    //stack = tmp; // 

    return stack;
}

//difference stack->next
//difference stack->next->nbr 