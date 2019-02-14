#include <stdio.h>
#include <stdlib.h>
#include "pile.h"

Pile *initialiser()
{
    Pile *pile = malloc(sizeof(*pile));
    pile->premier = NULL;
}

void empiler(Pile *pile, int nvNombre)
{
    Element *nouveau = malloc(sizeof(*nouveau));
    if (pile == NULL || nouveau == NULL)
    {
        exit(EXIT_FAILURE);
    }

    nouveau->nombre = nvNombre;
    nouveau->suivant = pile->premier;
    pile->premier = nouveau;
}

int depiler(Pile *pile)
{
    int nombreDepile = 0;
    Element *elementDepile = pile->premier;
    if (pile == NULL)
    {
        exit(EXIT_FAILURE);
    }


    if (pile != NULL && pile->premier != NULL)
    {
        nombreDepile = elementDepile->nombre;
        pile->premier = elementDepile->suivant;
        free(elementDepile);
    }

    return nombreDepile;
}

void afficherPile(Pile *pile)
{
    Element *actuel = pile->premier;
    if (pile == NULL)
    {
        exit(EXIT_FAILURE);
    }

    while (actuel != NULL)
    {
        printf("%d\n", actuel->nombre);
        actuel = actuel->suivant;
    }

    printf("\n");
}

