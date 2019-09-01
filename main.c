//tic-tac-toe
//prepared in collaboration with Sonu and Tejendra ;
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

char square[10] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
char choose,a;
int checkwin();
void board();

struct player{
    char name[20];
}p1,p2;

int main()
{
    int player = 1, i, choice;
    char mark;
    printf("\tWelcome to the world of Tic-Tac-Toe\n");
    printf("Enter player 1 Name:");
    gets(p1.name);
    printf("\nEnter player 2 Name:");
    gets(p2.name);
    printf("\n------------------------------------------------------------");
    printf("\n\n%s Choose one ('X' or 'O')",p1.name);
    scanf("%c",&choose);
    if(choose=='X'||choose=='x'){
        choose = 'X';
        a= 'O';
    } else if(choose=='O'||choose=='o'){
        choose = 'O';
        a= 'X';
    }

    do
    {
        board();
        player = (player % 2) ? 1 : 2;

        if(player ==1){
            printf("\nPlayer %s\nEnter a number from box:  ", p1.name);
            scanf("%d", &choice);
        } else{
            printf("\nPlayer %s\nEnter a number from box:  ", p2.name);
            scanf("%d", &choice);
        }


        mark = (player == 1) ? 'X' : 'O';

        if (choice == 1 && square[1] == '1')
            square[1] = mark;

        else if (choice == 2 && square[2] == '2')
            square[2] = mark;

        else if (choice == 3 && square[3] == '3')
            square[3] = mark;

        else if (choice == 4 && square[4] == '4')
            square[4] = mark;

        else if (choice == 5 && square[5] == '5')
            square[5] = mark;

        else if (choice == 6 && square[6] == '6')
            square[6] = mark;

        else if (choice == 7 && square[7] == '7')
            square[7] = mark;

        else if (choice == 8 && square[8] == '8')
            square[8] = mark;

        else if (choice == 9 && square[9] == '9')
            square[9] = mark;

        else
        {
            printf("\nInvalid move ");

            player--;
            getch();
        }
        i = checkwin();

        player++;
    }while (i ==  - 1);

    board();
    player=--player;

    if (i == 1) {
        if (player == 1) {
            system("cls");
            board();
            printf("\n\n------------------------------------------------------------");
            printf("\n\n==>\aCongratulation %s\n", p1.name);
            printf("Hope you enjoyed the game");
            printf("\n\n------------------------------------------------------------");

        } else {
            system("cls");
            board();
            printf("\n\n------------------------------------------------------------");
            printf("\n\n==>Congratulation %s\n", p2.name);
            printf("Hope you enjoyed the game");
            printf("\n\n------------------------------------------------------------");

        }
    }

    else {
        system("cls");
        board();
        printf("\n\n------------------------------------------------------------");
        printf("\n\n==>Game draw\n");
        printf("Hope you enjoyed the game");
        printf("\n\n------------------------------------------------------------");
    }
    getch();

    return 0;
}

int checkwin()
{
    if (square[1] == square[2] && square[2] == square[3])
        return 1;

    else if (square[4] == square[5] && square[5] == square[6])
        return 1;

    else if (square[7] == square[8] && square[8] == square[9])
        return 1;

    else if (square[1] == square[4] && square[4] == square[7])
        return 1;

    else if (square[2] == square[5] && square[5] == square[8])
        return 1;

    else if (square[3] == square[6] && square[6] == square[9])
        return 1;

    else if (square[1] == square[5] && square[5] == square[9])
        return 1;

    else if (square[3] == square[5] && square[5] == square[7])
        return 1;

    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
             square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7]
                                                                         != '7' && square[8] != '8' && square[9] != '9')

        return 0;
    else
        return  - 1;
}



void board()
{
    system("cls");
    printf("\n\n\tTic Tac Toe\n\n");

    printf("%s (%c)  -  %s (%c)\n\n\n",p1.name,choose,p2.name,a);


    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", square[1], square[2], square[3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[4], square[5], square[6]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[7], square[8], square[9]);

    printf("     |     |     \n\n");
}
