#ifndef PILE_H
# define PILE_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

typedef struct list_s
{
    int nbr;
    struct list_s *next;
} list_t;

list_t *push_stack(list_t *st, char *s);
list_t *freestack(list_t *st);
void   *printstack(list_t *st);
int isempty(list_t *st);

//--parsing--//

int parsing(char *av);
void error(list_t *st);

//------mouv-----//

list_t *swap(list_t *stack);
list_t *rotate(list_t *stack);
list_t *reverse_rotate(list_t *stack);

#endif