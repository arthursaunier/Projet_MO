#include <stdio.h>
#include <stdlib.h>

void lecture_position(void);

char position[3][4];
char ligne[6];

void main(void)
{
    lecture_position();
    return 0;
}

void lecture_position(void)
{
    signed char i=0,f=0,I=0,J=0;
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
        for(i=0;i<5;i++)
        {
            fgets(ligne, 9, fichier); // On lit maximum TAILLE_MAX caractères du fichier, on stocke le tout dans "chaine"
            printf("%s", ligne); // On affiche la chaîne
            for(f=0;f<5;f++)
            {
                position[i][f]=ligne[f];
            }

        }
        fclose(fichier); // On ferme le fichier qui a été ouvert
    }
 printf("\n");
 printf("\n");
 printf("\n");


for (I=0; I<6; I++)
   {
        /* ... considérer chaque composante */
        for (J=0; J<4; J++)
        {
            printf("%c", position[I][J]);

        }
         printf("\n");
   }

    return 0;
}


