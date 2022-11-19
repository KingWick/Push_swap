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
void error(list_t *stack);

//------mouv-----//

list_t *swap(list_t *st);
list_t *rotate(list_t *st);

#endif