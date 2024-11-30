/********************************************************************************/
/** menumanager.c - See menumanager.h for copyright and info                   **/
/********************************************************************************/

#include "menumanager.h"

/********************************************************************************/
/** FUNCTION NAME: addish
/** DESCRIPTION: adds a dish to the menu
/********************************************************************************/

void adddish(FILE *fpoint, char dish[200])
{
    fpoint = fopen("meniu.txt", "a+t");
    fgets(dish, 51, stdin);
    fprintf(fpoint, dish);
    fclose(fpoint);

}

/********************************************************************************/
/** FUNCTION NAME: addbvg
/** DESCRIPTION: adds a beverage to the menu
/********************************************************************************/

void addbvg(FILE *bpoint, char drink[200])
{
    bpoint = fopen("meniubauturi.txt", "a+t");
    fgets(drink, 51, stdin);
    fprintf(bpoint, drink);
    fclose(bpoint);
}

/********************************************************************************/
/** FUNCTION NAME: adddessert
/** DESCRIPTION: adds a dessert to the menu
/********************************************************************************/

void adddesert(FILE *dpoint, char des[200])
{

    dpoint = fopen("meniudesert.txt", "a+t");
    fgets(des, 51, stdin);
    fprintf(dpoint, des);
    fclose(dpoint);
}

/********************************************************************************/
/** FUNCTION NAME: removedish
/** DESCRIPTION: removes a dish from the menu
/********************************************************************************/

void removedish(FILE *fpointer, FILE *fpointeraux, int delete_line)
{
    char current;
    int line_number;
    char file1[] = "meniu.txt";
    char file2[] = "meniuaux.txt";
    fpointer = fopen(file1, "r");
    fpointeraux = fopen(file2, "w");
    current = getc(fpointer);
    if (current != EOF)
        line_number = 1;
        while (1)
        {
            if (delete_line != line_number)
                putc(current, fpointeraux);
            current = getc(fpointer);
            if (current == '\n')
                line_number++;
            if(current == EOF)
                break;
        }
        fclose(fpointer);
        fclose(fpointeraux);
        remove(file1);
        rename(file2, file1);
}

/********************************************************************************/
/** FUNCTION NAME: removebeverage
/** DESCRIPTION: removes a beverage from the menu
/********************************************************************************/

void removebeverage(FILE *fpointer, FILE *fpointeraux, int delete_beverage)
{
    char current;
    int line_number;
    char file1[] = "meniubauturi.txt";
    char file2[] = "meniubaututriaux.txt";
    fpointer = fopen(file1, "r");
    fpointeraux = fopen(file2, "w");
    current = getc(fpointer);
    if (current != EOF)
        line_number = 1;
        while (1)
        {
            if (delete_beverage != line_number)
                putc(current, fpointeraux);
            current = getc(fpointer);
            if (current == '\n')
                line_number++;
            if(current == EOF)
                break;
        }
        fclose(fpointer);
        fclose(fpointeraux);
        remove(file1);
        rename(file2, file1);
}

/********************************************************************************/
/** FUNCTION NAME: removedish
/** DESCRIPTION: removes a dessert from the menu
/********************************************************************************/

void removedessert(FILE *fpointer, FILE *fpointeraux, int delete_dessert)
{
    char current;
    int line_number;
    char file1[] = "meniudesert.txt";
    char file2[] = "meniudeserturiaux.txt";
    fpointer = fopen(file1, "r");
    fpointeraux = fopen(file2, "w");
    current = getc(fpointer);
    if (current != EOF)
        line_number = 1;
        while (1)
        {
            if (delete_dessert != line_number)
                putc(current, fpointeraux);
            current = getc(fpointer);
            if (current == '\n')
                line_number++;
            if(current == EOF)
                break;
        }
        fclose(fpointer);
        fclose(fpointeraux);
        remove(file1);
        rename(file2, file1);
}



