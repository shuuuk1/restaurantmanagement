/********************************************************************************/
/** login.c - See login.h for copyright and info                               **/
/********************************************************************************/

#include "login.h"

/********************************************************************************/
/** FUNCTION NAME: managerusercheck
/** DESCRIPTION: checks whether the manager's username is correct or not
/********************************************************************************/

int managerusercheck(char user[15])
{
    if(strcmp(user, "Ionut") == 0 || strcmp(user, "Cristi") == 0)
    return 0;
    else return 1;
}

/********************************************************************************/
/** FUNCTION NAME: managerpasscheck
/** DESCRIPTION: checks whether the manager's password is correct or not
/********************************************************************************/

int managerpasscheck(char pass[15])
{
    if(strcmp(pass, "ionut123") == 0 || strcmp(pass, "cristi123") == 0)
    return 0;
    else return 1;
}

/********************************************************************************/
/** FUNCTION NAME: managerpassuser
/** DESCRIPTION: checks if the manager's username and password correspond
/********************************************************************************/

int managerpassuser(char user[15], char pass[15])
{
    if((strcmp(user, "Ionut") == 0 && strcmp(pass, "ionut123") == 0) || (strcmp(user, "Cristi") == 0 && strcmp(pass, "cristi123") == 0))
        return 0;
    else return 1;
}

/********************************************************************************/
/** FUNCTION NAME: admincheck
/** DESCRIPTION: checks whether the admin's username is correct or not
/********************************************************************************/

int admincheck(char adm[15])
{
    if(strcmp(adm, "admin") == 0)
    return 0;
    else return 1;
}

/********************************************************************************/
/** FUNCTION NAME: admincheck
/** DESCRIPTION: checks whether the admin's password is correct or not
/********************************************************************************/

int adminpasscheck(char mnt[15])
{
    if(strcmp(mnt, "maintenance") == 0)
    return 0;
    else return 1;
}
