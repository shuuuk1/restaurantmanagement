/********************************************************************************/
/** login.h - Header file for module login                                     **/
/** Copyright: 2020                                                            **/
/** Authors: Cristian Hădărău, Șucea Ionuț                                     **/
/** Version 01-05-2021                                                         **/
/********************************************************************************/

#include <stdlib.h>


extern int managerusercheck(char user[15]);

extern int managerpasscheck(char pass[15]);

extern int managerpassuser(char user[15], char pass[15]);

extern int admincheck(char adm[15]);

extern int adminpasscheck(char mnt[15]);
