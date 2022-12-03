#include "../includes/pile.h"

int main(int ac, char **av)
{
    list_t *stack_a = NULL;
    list_t *stack_b = NULL;
    int i = 1; //pour avoir le bon nombre d'arguments (On extrait l'exec) (evite de boucler une fois de plus)
    while (i < ac)
    {
        if(parsing(av[i]) == 1)
            error(stack_a);
        stack_a = push_stack(stack_a,av[i]);
        i++;
    }
  // printf("\n\n");
    //printstack(stack_a);
    check_order(stack_a);
    check_doublon(stack_a);
    stack_a = rotate(stack_a);
   // stack_a = swap(stack_a);
    //stack_a = reverse_rotate(stack_a);
    //stack_a = push_st(stack_a,stack_b);
    //stack_b = push_st(stack_a,stack_b);

    //printf("\n");
    printstack(stack_a);
    printf("\nici");
    printstack(stack_b);

    // if (stack_a == NULL)
    //     printf("stack_a vide\n");
    // else
    //     printf("liste rempli\n");

    stack_a = freestack(stack_a);

    // if (stack_a == NULL)
    //     printf("\nstack_a vide\n");
    // else
    //     printf("liste rempli\n");
    return 0;
}