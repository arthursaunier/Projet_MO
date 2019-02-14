#include <stdio.h>
#include <stdlib.h>

void lecture_position(void);

position[3][4];

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




        if (fichier != NULL)     // On lit dans le fichier
    {
        fgets(position, TAILLE_MAX, fichier); // On lit maximum TAILLE_MAX caractères du fichier, on stocke le tout dans "chaine"
        printf("%s", position); // On affiche la chaîne

        fclose(fichier); // On ferme le fichier qui a été ouvert
    }

    return 0;
}


