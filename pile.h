#ifndef H_PILE
#define H_PILE

typedef struct Element Element;
struct Element
{
    char position[4][5];
    Element *suivant;
};

typedef struct Pile Pile;
struct Pile
{
    Element *premier;
};

Pile *initialiser();
void empiler(Pile *pile, char nvPosition[4][5]);
int depiler(Pile *pile);
void afficherPile(Pile *pile);

#endif
