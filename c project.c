#include<stdio.h>
#include<ctype.h>
#include <time.h>


int check();
main()
{
    int count,result;
    char choice,retry;
    printf("\n\t\t\t    WELCOME ");
    printf("\n\t\t\t      to ");
    printf("\n\t\t\t THE GAME OF ");
    printf("\n\t\t      ROCK PAPER SCISSOR ");
    printf("\n\t\t > Press s to start the game");
    printf("\n\t\t > press q to quit             ");
    choice=tolower(getch());

    if(choice=='s')
    {
        do{
        printf("\n\n\n\t\t\tPlayer vs Computer");\
        printf("\n\n\t\t       Choose the Option: ");
        printf("\n\t\t A.ROCK     B.PAPER     C.SCISSOR");
        result=check();

        if (result == -1) {
        printf("\n\n\t\t\tGame Draw!\n");
        }
        else if (result == 1) {
            printf("\n\n\t\t\tWow! You have won the game!\n");
        }
        else {
            printf("\n\n\t\t\tOh! You have lost the game!\n");
        }
        printf("\n\n\t\t\t PLAY AGAIN!!!(Y/N)");
        retry=toupper(getch());
        }while(retry!='N');
    }
    else if(retry=='q'){
        printf("\n\n\n\t\t      THANK choice FOR PLAYING!");
    }
    else{
        printf("\n\n\n\t\t      INVALID INPUT SO BYE-BYE!!");
    }


}

int check()
{
    int n;
    char choice,computer;
    srand(time(NULL));
    choice=toupper(getch());
    n = rand() % 100;
    if (n < 33)
        computer = 'A';
    else if (n > 33 && n < 66)
        computer = 'B';
    else
        computer = 'C';



    if (choice == computer)
        return -1;
    if (choice == 'A' && computer == 'B')
        return 0;
            else if (choice == 'B' && computer == 'A')
                return 1;


    if (choice == 'A' && computer == 'C')
        return 1;
    else if (choice == 'C' && computer == 'A')
        return 0;
    if (choice == 'B' && computer == 'C')
        return 0;
    else if (choice == 'C' && computer == 'B')
        return 1;

}









