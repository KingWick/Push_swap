#include "pile.h"

list_t *freestack(list_t *stack)
{
    list_t *tmp;
    if (isempty(stack))
        return (NULL); // on verifie que la pile est vide est on y retourne une nouvelle
    while(stack)
    {
        tmp = stack->next; // st pointant sur le maillon suivant sauvegarder dans tmp
        free(stack); // libere st (copie sauvegarder dans tmp)
        stack = tmp; // re donne le contenue de tmp a st dans la boucle d'apres on passe au suivant 
    }
    return(stack);
}

int isempty(list_t *st)
{
    if (st == NULL)
        return (1);     //equivalent a 0 et 1 pour vrai est faux
    else
        return 0;
}

list_t *push_stack(list_t *st, char *s)
{
     list_t *element;
     list_t *end;

     element = malloc(sizeof(*element));
     if (!element)
         return 0;
    element->nbr = atoi(s); // mon element pointe sur nbr et je converti en int via atoi car je recoi des argument char avec le parametres argv
    element->next = NULL; // l'element suivant de ma pile pointe maintenant vers null pour indiquer la fin de la chaine 

    if (st == NULL)
            st = element;
    else
    {
        end = st;
        while (end->next)
        {
            end = end->next;
        }
        end->next = element;
    }

    //  si st == NULL
    //  st = nouvel element
    //  sinon
    //  endst = derniere element de st
    //  endstack->next = nouvel element
    //  return st 
    return(st); // j'return ma stack
}

void *printstack(list_t *stack)
{
    if (isempty(stack))
        return 0;
    while(stack)
    {
        printf("[%d]->", stack->nbr);
        stack = stack->next;
    }
    return 0;
}
