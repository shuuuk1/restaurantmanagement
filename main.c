#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "menumanager.h"
#include "login.h"
#include "customercommands.h"
#include "admincmd.h"

int main()
{

    FILE *foodpointer, *bvgpointer, *despointer, *plvpointer, *pwpointer;
    FILE *fpointerr, *fpointerraux;
    FILE *backupptr1, *backupptr2;
    int loginaction, customeraction, manageraction, adminaction, foodprice, delete_dish, delete_beverage, delete_dessert, program_action;
    char username[15], password[15], admin[15], adminpass[15], food[200], bvg[200], desert[200], program_lv[200], program_weekend[200];
    char cbackup[200];
    int price, ora_inchiderii = 23, m_inchiderii = 30, ora_deschiderii = 10, m_deschiderii = 30;

    printf("Welcome to the X Restaurant. Please choose an action from below! (1-4)\n\n");
    printf("1) Customer's commands\n2) Login as Manager\n3) Login as Administrator\n4) Exit\n\n");
    scanf("%d", &loginaction);

    switch (loginaction)
    {
    case 1:
        printf("\nCustomer's commands:\n");
        printf("1)Show dishes menu \n2)Show beverages menu \n3)Show dessert menu \n4)Show whole menu \n5)Show time \n6)Show program\n\n");
        scanf("%d", &customeraction);

        switch (customeraction)
            {
            case 1:
                showdish(foodpointer, food);
                break;
            case 2:
                showbeverage(bvgpointer, bvg);
                break;
            case 3:
                showdessert(despointer, desert);
                break;
            case 4:
                showdish(foodpointer, food);
                showbeverage(bvgpointer, bvg);
                showdessert(despointer, desert);
                break;
            case 5:
                showtime();
                break;
            case 6:
                showprogram(ora_inchiderii, m_inchiderii, ora_deschiderii, m_deschiderii);
                break;

            default:
                printf("Invalid choice!\n");
            }
        break;

    case 2:
        printf("Enter your username:\n");
        scanf("%s", &username);
        printf("Enter your password:\n");
        scanf("%s", &password);


        if(managerusercheck(username) == 0)
        {
            if(managerpasscheck(password) == 0 && managerpassuser(username, password) == 0)
            {

                printf("\n\nWelcome! Please choose an action from below.(1-8)");
                printf("\n\n1)Add dish \n2)Add beverage \n3)Add desert \n4)Remove dish \n5)Remove beverage \n6)Remove dessert \n7)Show the whole menu \n8)Close\n\n");
                scanf("%d", &manageraction);
                switch(manageraction)
                {
                case 1:
                    printf("\nWhat food would you like to add?\n");
                    fgets(food, sizeof(food), stdin);
                    adddish(foodpointer, food);
                    printf("\nFood added!\n");
                    break;

                case 2:
                    printf("\nWhat beverage would you like to add?\n");
                    fgets(bvg, sizeof(bvg), stdin);
                    addbvg(bvgpointer, bvg);
                    printf("\nBeverage added!\n");
                    break;

                case 3:
                    printf("\nWhat dessert would you like to add?\n");
                    fgets(desert, sizeof(desert), stdin);
                    adddesert(despointer, desert);
                    printf("\nDessert added!\n");
                    break;

                case 4:
                    printf("\nWhat dish do you want to remove?\n");
                    scanf("%d", &delete_dish);
                    removedish(fpointerr, fpointerraux, delete_dish);
                    printf("\Dish removed!\n");
                    break;

                case 5:
                    printf("\nWhat beverage do you want to remove?\n");
                    scanf("%d", &delete_beverage);
                    removebeverage(fpointerr, fpointerraux, delete_beverage);
                    printf("\Beverage removed!\n");
                    break;

                case 6:
                    printf("\nWhat dessert do you want to remove?\n");
                    scanf("%d", &delete_dessert);
                    removedessert(fpointerr, fpointerraux, delete_dessert);
                    printf("\Dessert removed!\n");
                    break;

                case 7:
                    showdish(foodpointer, food);
                    showbeverage(bvgpointer, bvg);
                    showdessert(despointer, desert);
                    break;

                case 8:
                    printf("\nProgram successfully closed.");
                    break;

                default:
                    printf("Invalid choice!\n");
            }


            }
               else printf("\nWrong password!");
        }
        else printf("\nUser not found!");
        break;

    case 3:
        printf("///admin_username:\n");
        scanf("%s", &admin);
        printf("///admin password:\n");
        scanf("%s", &adminpass);

        if(admincheck(admin) == 0)
        {
            if(adminpasscheck(adminpass) == 0)
            {
                printf("\nLogged in as administrator!\n");
                printf("\nWhat would you like to do?\n");
                printf("\n\n1)Delete the dishes menu \n2)Delete the beverages menu \n3)Delete the desserts menu \n4)Backup a file \n5)Change the working hours\n\n");
                scanf("%d", &adminaction);
                switch(adminaction)
                {
                case 1:
                    removedishmenu();
                    break;
                case 2:
                    removebeveragemenu();
                    break;
                case 3:
                    removedessertmenu();
                    break;
                case 4:
                    backupfile(backupptr1, backupptr2, cbackup);
                    break;
                case 5:

                    printf("\n\n1)Show current program \n2)Modify open hour \n3)Modify close hour \n4)Modify the program \n\n");
                    scanf("%d", &program_action);
                    switch(program_action)
                    {
                        case 1:
                            if (ora_deschiderii >= 0 && ora_deschiderii <= 23 && ora_inchiderii >= 0 && ora_inchiderii <= 23 &&
                                 m_deschiderii >= 0 && m_deschiderii <= 59 && m_inchiderii >= 0 && m_inchiderii <= 59 )
                            {
                                printf("The restaurant opens at: %d : %d\n", ora_deschiderii, m_deschiderii);
                                printf("The restaurant closes at: %d : %d\n", ora_inchiderii, m_inchiderii);
                            }
                            break;
                        case 2:
                            change_open_program(ora_deschiderii, m_deschiderii);
                            break;
                        case 3:
                            change_close_program(ora_inchiderii, m_inchiderii);
                            break;
                        case 4:
                            change_open_program(ora_deschiderii, m_deschiderii);
                            change_close_program(ora_inchiderii, m_inchiderii);
                            break;

                    }
                    break;
                }
            }
               else printf("\nWrong password!");
        }
        else printf("\nUser not found!");
        break;

    case 4:
        printf("\n~Have a good day!~");
        break;

    default:
        printf("Invalid choice!\n");

    }

    return 0;
}
