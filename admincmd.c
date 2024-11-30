/********************************************************************************/
/** admincmd.c - See admincmd.h for copyright and info                         **/
/********************************************************************************/

#include "admincmd.h"

/********************************************************************************/
/** FUNCTION NAME: removedishmenu
/** DESCRIPTION: deletes the dishes menu file
/********************************************************************************/

extern void removedishmenu()
{
    if(remove("meniu.txt") == 0)
        printf("Dish menu deleted succesfully!");
    else printf("Unable to delete this file.");
}

/********************************************************************************/
/** FUNCTION NAME: removebeveragemenu
/** DESCRIPTION: deletes the beverages menu file
/********************************************************************************/

extern void removebeveragemenu()
{
    if(remove("meniubauturi.txt") == 0)
        printf("Beverages menu deleted succesfully!");
    else printf("Unable to delete this file.");
}

/********************************************************************************/
/** FUNCTION NAME: removedessertmenu
/** DESCRIPTION: deletes the desserts menu file
/********************************************************************************/

extern void removedessertmenu()
{
    if(remove("meniudesert.txt") == 0)
        printf("Dessert menu deleted succesfully!");
    else printf("Unable to delete this file.");
}

/********************************************************************************/
/** FUNCTION NAME: backupfile
/** DESCRIPTION: copies the contents of a file into another file
/********************************************************************************/

void backupfile(FILE *ptraux1, FILE *ptraux2, char fname[200])
{
    char c;
    printf("Enter the name of the file you want to backup\n");
    scanf("%s", fname);
    ptraux1 = fopen(fname, "r");

    printf("Enter the name of the backup file\n");
    scanf("%s", fname);
    ptraux2 = fopen(fname, "w");

    c = fgetc(ptraux1);
    while (c != EOF)
    {
        fputc(c, ptraux2);
        c = fgetc(ptraux1);
    }

    printf("\nBackup succesfully done to %s file", fname);
    fclose(ptraux1);
    fclose(ptraux2);
}

/********************************************************************************/
/** FUNCTION NAME: change_open_program
/** DESCRIPTION: changes the opening hours
/********************************************************************************/

void change_open_program(int *ora_deschiderii, int *m_deschiderii)
{
    printf("Modify the opening time: ");
    scanf("%d %d", &ora_deschiderii, &m_deschiderii);
    printf("Opening time changed succesfully (%d : %d)!\n", ora_deschiderii, m_deschiderii);
}

/********************************************************************************/
/** FUNCTION NAME: change_close_program
/** DESCRIPTION: changes the closing hours
/********************************************************************************/

void change_close_program(int *ora_inchiderii, int *m_inchiderii)
{
     printf("Modify the closing time: ");
    scanf("%d %d", &ora_inchiderii, &m_inchiderii);
    printf("Closing time changed succesfully (%d : %d)!\n", ora_inchiderii, m_inchiderii);
}
