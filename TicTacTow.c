#include <stdio.h>
#include <stdbool.h>
int moves=0;

char board[3][3] = {
    {' ', ' ', ' '},
    {' ', ' ', ' '},
    {' ', ' ', ' '}
};

char example[3][9] = {
    {'1', '1', ' ', '1', '2', ' ', '1', '3', ' '},
    {'2', '1', ' ', '2', '2', ' ', '2', '3', ' '},
    {'3', '1', ' ', '3', '2', ' ', '3', '3', ' '}
};

void printBoard() {
	int i,j;
    printf("  1 2 3\n");
    for ( i = 0; i < 3; i++) {
        printf("%d ", i + 1);
        for ( j = 0; j < 3; j++) {
            printf("%c", board[i][j]);
            if (j < 2) {
                printf("|");
            }
        }
        printf("\n");
        if (i < 2) {
            printf("  -----\n");
        }  
    }
    moves++;
}

void playerMove(char player) {
    int row, col;
    printf("Player %c, enter your move (row, col): ", player);
    scanf("%d %d", &row, &col);

    // Input validation
    while (row < 1 || row > 3 || col < 1 || col > 3 || board[row - 1][col - 1] != ' ') {
        printf("Invalid move. Please try again.\n");
        printf("Player %c, enter your move (row, col): ", player);
        scanf("%d %d", &row, &col);
    }

    board[row - 1][col - 1] = player;
}

bool checkWin(char player) {
	int i,j;
    // Check rows
    for ( i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
            return true;
        }
    }

    // Check columns
    for ( j = 0; j < 3; j++) {
        if (board[0][j] == player && board[1][j] == player && board[2][j] == player) {
            return true;
        }
    }

    // Check diagonals
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
        return true;
    }

    return false;
}

int main() {
	int i,j;
    char currentPlayer = 'X';
       printf("***INSTRUCTIONS***\n");
       printf("You have to play this game in this way.\n");
       printf("You have to put your response like below.\n");
        for ( i = 0; i < 3; i++) {
         for ( j = 0; j < 9; j++) {
          printf("%c", example[i][j]);
         }
         printf("\n");
        }
        printf("\n \n");
    while (1) {
        printBoard();
        playerMove(currentPlayer);
        
        if (moves == 9) {
        	printBoard();
            printf("It's a draw!\n"); 
            break;
        }

        if (checkWin(currentPlayer)) {
            printBoard();
            printf("Player %c wins!\n", currentPlayer);
            break;
        }

        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
         
        
    }


    printf("Thanks for playing!\n");

    return 0;
}
