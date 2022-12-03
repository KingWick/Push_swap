#include "pile.h"

list_t *freestack(list_t *stack)
{
    list_t *tmp;

    while(stack)
    {
        tmp = stack->next; // st pointant sur le maillon suivant sauvegarder dans tmp
        free(stack); // libere st (copie sauvegarder dans tmp)
        stack = tmp; // re donne le contenue de tmp a st dans la boucle d'apres on passe au suivant 
    }
    return(stack);
}

list_t *push_stack(list_t *st, char *s)
{
     list_t *element;
     list_t *tmp;

     element = malloc(sizeof(*element));
     if (!element)
         return 0;
    element->nbr = ft_atoi(s); 
    element->next = NULL;

    if (st == NULL)
        return element;
    tmp = st;
    while (tmp->next)
    {
        tmp = tmp->next;
    }
    tmp->next = element;
    return(st);
}

void printstack(list_t *stack)
{
    while(stack)
    {
        printf("[%d]->", stack->nbr);
        stack = stack->next;
    }
}
