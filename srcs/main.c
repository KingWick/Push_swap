#include "../includes/pile.h"

int main(int ac, char **av)
{
    list_t *stack_a = NULL;
    list_t *stack_b = NULL;
    int size;

    int i = 1;
    if (ac < 2)
        return 0;
    while (i < ac)
    {
        if(parsing(av[i]) == 1)
            error(stack_a);
        stack_a = push_stack(stack_a,av[i]);
        size = lengh_stack(stack_a);
        i++;
    }
    check_order(stack_a);
    check_doublon(stack_a);
    if (size == 2)
        sort_for_two(stack_a);
    //if (size == 3)
    //     trie_for_three(stack_a);
    
    
    //stack_a = rotate(stack_a);
    //stack_a = swap(stack_a);
    //stack_a = reverse_rotate(stack_a);
    //stack_a = push_st(stack_a,stack_b);
    
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