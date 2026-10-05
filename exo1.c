#include <stdio.h>

int main()
{
    int nombre;
    printf("Choisissez un nombre de seconde à convertir:");
    scanf("%d", &nombre);
    int seconde;
    seconde= nombre %60;
    int minute;
    int heure;
    minute = ((nombre-seconde)/60)%60;
    heure = ((nombre-seconde)-(minute*60))/60;
    printf("%d secondes = %d heures, %d minutes et %d secondes.\n", nombre, heure, minute ,seconde);     

    return 0;
}