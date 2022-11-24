#include "../includes/pile.h"

int main(int ac, char **av)
{
    list_t *list = NULL;
    int i = 0;
    ac = ac - 1; //pour avoir le bon nombre d'arguments (On extrait l'exec) (evite de boucler une fois de plus)
    while (i < ac)
    {
       // printf("[%d]", parsing(av[i]));
        if(parsing(av[i + 1]) == 1) // On saute l'exec on passe a largument suivant sinon error il va parser sur l'exec
            error(list);
        list = push_stack(list,av[i + 1]);;
        i++;
        //printf("[%s]Valeur de av[i]\n", av[i + 1]);
    }
    //printstack(list);
    list = rotate(list);
    //list = swap(list);
    //list = reverse_rotate(list);
    printstack(list);

    if (isempty(list))
        printf("list vide\n");
    else
        printf("liste rempli\n");
    
   list = freestack(list);

     if (isempty(list))
        printf("list vide\n");
    else
        printf("liste rempli\n");
    return 0;
}