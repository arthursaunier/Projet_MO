#include <stdio.h>
#include <stdlib.h>
#include "pile.h"

Pile *initialiser()
{
    Pile *pile = malloc(sizeof(*pile));
    pile->premier = NULL;
}

void empiler(Pile *pile, char nvPosition[4][5])
{
    char i =0;
    Element *nouveau = malloc(sizeof(*nouveau));
    if (pile == NULL || nouveau == NULL)
    {
        exit(EXIT_FAILURE);
    }
    for(i=0; i<4;i++)
    {
        nouveau->position[i][1] = nvPosition[i][1];
    }

    nouveau->suivant = pile->premier;
    pile->premier = nouveau;
}

int depiler(Pile *pile)
{
    char positionDepile = 0;
    Element *elementDepile = pile->premier;
    if (pile == NULL)
    {
        exit(EXIT_FAILURE);
    }


    if (pile != NULL && pile->premier != NULL)
    {
        positionDepile = elementDepile->position;
        pile->premier = elementDepile->suivant;
        free(elementDepile);
    }

    return positionDepile;
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
        printf("%d\n", actuel->position);
        actuel = actuel->suivant;
    }

    printf("\n");
}

