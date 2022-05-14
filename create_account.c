#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

//        *********************** create account and exist system for admin **********************

void Create_new_account();
void  Exit_System();

int main()
{
      char option;
      int num_acc=0;
      while(1)
      {


       printf("\n\t***** Welcome to Bank Account *****\n");
       printf("\n***This demo program is brought you by select option***\n");
       display_options();
       printf("Please enter any options (1/2) ");
       printf("to continue : ");

        option = getch();
        printf("%c \n", option);
        switch(option)
        {
          case '1': Create_new_account();
                    break;
          case '2': Exit_System();
                    break;
          default : system("cls");
                    printf("Please enter one of the options");
                    printf("(1/2) to continue \n ");
                    break;
        }
    }
    return 0;
}
/*Function to display available options in this application*/
    void display_options()
    {
        printf("\n1. Create new account \n");
        printf("2. Exit System \n");

    }

/* Function to create new account */

    void Create_new_account()
    {    // full name
         char chr1[50];
         // address
         char chr2[100];
         float age;
         int bankaccountid[10];
         char nationalid[14];
         int balance;
         int passward;

        printf("Enter Your Full Name : ");
        scanf("%s",&chr1);
        printf("Enter Your Full Address : ");
        scanf("%s",&chr2);
        printf("Enter Your Age : ");
        scanf("%f",&age);
        printf("Enter Your National ID : ");
        scanf("%s",&nationalid);
        printf("Enter Your Bank Account ID : ");
        scanf("%s",&bankaccountid);
        printf("Enter Your Balance : ");
        scanf("%f",&balance);
        printf("Enter Your Passward : ");
        scanf("%f",&passward);

        printf("________________________________________________________\n");
        printf("\n****Account has been created successfully ****\n\n");

        printf("Full Name =%s\n",chr1);
        printf("Full Address=%s\n",chr2);
        printf("Age = %f\n",age);
        printf("National ID = %s\n",nationalid);
        printf("Bank Account ID= %s\n",bankaccountid);
        printf("Balance= %d\n",balance);
        printf("Passward = %d\n",passward);

    }
/* Function to exit system */
    void  Exit_System() {;
        printf("+++!!!You selected invalid message!!!+++\n");
    }
