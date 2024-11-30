/********************************************************************************/
/** customercommands.h - Header file for module customercommands               **/
/** Copyright: 2020                                                            **/
/** Authors: Cristian Hădărău, Șucea Ionuț                                     **/
/** Version 01-05-2021                                                         **/
/********************************************************************************/

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

extern void showdish(FILE *fpoint, char aux[50]);

extern void showbeverage(FILE *bpoint, char aux[50]);

extern void showdessert(FILE *dpoint, char aux[50]);

extern void showtime();

extern void showprogram(int ora_inchiderii, int m_inchiderii, int ora_deschiderii, int m_deschiderii);


