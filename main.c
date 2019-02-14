#include <stdio.h>
#include <stdlib.h>

void lecture_position(void);





/*Constantes pour chacune des directions*/
#define HAUT 8
#define BAS 2
#define GAUCHE 4
#define DROITE 6

int position[4][3];

void main(void)
{
    lecture_position();
    return 0;
}

void lecture_position(void)
{
    FILE* fichier = NULL;

    fichier = fopen("position.txt", "r");

    if (fichier != NULL)
    {
        printf("c'est bon on peut lire le fichier\n");
    }
    else
    {

        printf("Impossible d'ouvrir le fichier position.txt\n");
    }

    return 0;
}
