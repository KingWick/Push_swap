#ifndef PILE_H
# define PILE_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>

typedef struct list_s
{
    int nbr;
    struct list_s *next;
}               list_t;

//----Stack---//
list_t *push_stack(list_t *st, char *s);
list_t *freestack(list_t *st);
int    lengh_stack(list_t *st);
void   printstack(list_t *st);

//--parsing--//

int     check_order(list_t *st);
int 	check_doublon(list_t *st);
int     parsing(char *av);
void    error(list_t *st);

//------mouv-----//

list_t *swap(list_t *stack);
list_t *rotate(list_t *stack);
list_t *reverse_rotate(list_t *stack);
list_t *push_st(list_t *stack_a, list_t *stack_b);

//--------Trie------//

void    sort_for_two(list_t *stack);
void    sort_for_three(list_t *stack);


//----toolbox-----//

long ft_atoi(char *str);
void ft_putstr(char *str);


#endif