/********************************************************************************/
/** admincmd.h - Header file for module admincmd                               **/
/** Copyright: 2020                                                            **/
/** Authors: Cristian Hădărău, Șucea Ionuț                                     **/
/** Version 01-05-2021                                                         **/
/********************************************************************************/

#include <stdlib.h>
#include <stdio.h>

extern void removedishmenu();

extern void removebeveragemenu();

extern void removedessertmenu();

extern void change_open_program(int *ora_deschiderii, int *m_deschiderii);

extern void change_close_program(int *ora_inchiderii, int *m_inchiderii);

extern void backupfile(FILE *ptraux1, FILE *ptraux2, char fname[200]);


