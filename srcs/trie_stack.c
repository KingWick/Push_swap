
#include "../includes/pile.h"

void    sort_for_two(list_t *stack)
{
    if (stack->nbr > stack->next->nbr)
        swap(stack);
}

// void    trie_for_three(list_t *stack)
// {
//     if (stack->nbr > stack->next->nbr)
//         swap(stack);
// }
