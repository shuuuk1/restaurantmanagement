/********************************************************************************/
/** customercommands.c - See customercommands.h for copyright and info         **/
/********************************************************************************/

#include "customercommands.h"


/********************************************************************************/
/** FUNCTION NAME: showdish
/** DESCRIPTION: shows the dishes from the menu
/********************************************************************************/

void showdish(FILE *fpoint, char aux[50])
{
    fpoint = fopen("meniu.txt", "r");
    printf("\nOur dishes:\n\n");
    aux = fgetc(fpoint);
    while(aux != EOF)
    {
        printf("%c", aux);
        aux = fgetc(fpoint);
    }
    printf("\n\n");
    fclose(fpoint);
}

/********************************************************************************/
/** FUNCTION NAME: showbeverage
/** DESCRIPTION: shows the beverages from the menu
/********************************************************************************/

void showbeverage(FILE *bpoint, char aux[50])
{
    bpoint = fopen("meniubauturi.txt", "r");
    printf("\nOur beverages:\n\n");
    aux = fgetc(bpoint);
    while(aux != EOF)
    {
        printf("%c", aux);
        aux = fgetc(bpoint);
    }
    printf("\n\n");
    fclose(bpoint);
}

/********************************************************************************/
/** FUNCTION NAME: showdessert
/** DESCRIPTION: shows the desserts from the menu
/********************************************************************************/

void showdessert(FILE *dpoint, char aux[50])
{
    dpoint = fopen("meniudesert.txt", "r");
    printf("\nOur desserts:\n\n");
    aux = fgetc(dpoint);
    while(aux != EOF)
    {
        printf("%c", aux);
        aux = fgetc(dpoint);
    }
    printf("\n\n");
    fclose(dpoint);
}

/********************************************************************************/
/** FUNCTION NAME: showtime
/** DESCRIPTION: shows the current date and time
/********************************************************************************/

void showtime()
{
    time_t currenttime;
    struct tm * timeinfo;
    time(&currenttime);
    timeinfo = localtime(&currenttime);
    printf("Current local date and time: %s", asctime(timeinfo));
}

/********************************************************************************/
/** FUNCTION NAME: showprogram
/** DESCRIPTION: shows the opening/closing hours
/********************************************************************************/

void showprogram(int ora_inchiderii, int m_inchiderii, int ora_deschiderii, int m_deschiderii)
{
    if (ora_deschiderii >= 0 && ora_deschiderii <= 23 && ora_inchiderii >= 0 && ora_inchiderii <= 23 &&
        m_deschiderii >= 0 && m_deschiderii <= 59 && m_inchiderii >= 0 && m_inchiderii <= 59 )
    {
        printf("The restaurant opens at: %d : %d\n", ora_deschiderii, m_deschiderii);
        printf("The restaurant closes at: %d : %d\n", ora_inchiderii, m_inchiderii);
    }
}

