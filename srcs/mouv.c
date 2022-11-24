#include "../includes/pile.h"

list_t *swap(list_t *stack)
{
	int tmp;

    tmp = stack->nbr; // tmp est egal a ma stack pointant sur le premier element 
    stack->nbr = stack->next->nbr; //mon first element est egal a ma list pointant sur lelement suivant 
    stack->next->nbr = tmp; // ma list pointant sur lelement suivant egal a tmp 
    return (stack);
}

list_t *rotate(list_t *stack)
{
    if(!stack)
        return NULL;//test avcc rotate sans argument et mets en com cette condi (conditon qui empeche le depassement memoire)
    list_t *tmp;
    list_t *head;
    
    head = stack; //recupere le premier element dl'a stack (stack pointe vers sont adresse(Du coup sa premiere case))
    tmp = stack->next; // recupere lelement suivant de la stack
    
    while(stack->next) //tant que l'element suivant de l'element actuel n'est pas le dernier 
    {
        //printf("%d", stack->nbr);
        stack = stack->next;
    }
    stack->next = head; //pointe maintenant sur le premier element et non plus vers le NULL (fin de chaine)
    //stack = tmp;
    head->next = NULL; // ma tete pointe ver null 

    return tmp;
}

list_t *reverse_rotate(list_t *stack)
{
    if(!stack)
        return NULL;
    list_t *tmp;
    list_t *head;
    
    head = stack; //recupere le premier element dl'a stack (stack pointe vers sont adresse(Du coup sa premiere case))

    while(stack->next && stack->next->next) //tant que l'element suivant de l'element actuel n'est pas le dernier 
    {
        stack = stack->next;
    }
    //stack = 3 stack->next = 4 stack->next->next = NULL
    stack->next->next = head; //pointe maintenant sur le premier element et non plus vers le NULL (fin de chaine) 
    tmp = stack->next; // recupere lelement suivant de la stack
    stack->next = NULL;
    //stack->next = NULL; // ma tete pointe ver null 

    return tmp;
}