#include<stdio.h>
/* Prototypes des fonctions afin que le compilateur les connaisse avant de les utiliser */
unsigned long carre(short); /* Carré d'un nombre */
long cube(short); /* Cube d'un nombre */

/* Fonction principale */
int main()
{
/* Programmation */
printf("Carré de 2 = %lu\n", carre(2));
printf("Cube de 3 = %ld\n", cube(3));
return 0;
}
