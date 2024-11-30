/********************************************************************************/
/** menumanager.h - Header file for module menumanager                         **/
/** Copyright: 2020                                                            **/
/** Authors: Cristian Hădărău, Șucea Ionuț                                     **/
/** Version 01-05-2021                                                         **/
/********************************************************************************/

#include <stdlib.h>
#include <stdio.h>


extern void adddish(FILE *fpoint, char dish[200]);

extern void addbvg(FILE *bpoint, char drink[200]);

extern void adddesert(FILE *dpoint, char des[200]);

extern void removedish(FILE *fpointer, FILE *fpointeraux, int delete_line);

extern void removebeverage(FILE *fpointer, FILE *fpointeraux, int delete_beverage);

extern void removedessert(FILE *fpointer, FILE *fpointeraux, int delete_dessert);

extern void backupfile(FILE *ptraux1, FILE *ptraux2, char fname[200]);


