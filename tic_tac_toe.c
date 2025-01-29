/*  Tic Tac Toe game */

#include <stdio.h>
#include <stdbool.h>

void print_board(char a[3][3]);
char check_board(char a[3][3]);
bool board_full(char a[3][3]);
char template_board[3][3] = {   '1','2','3',
                                '4','5','6',
                                '7','8','9' };

int main (void)
{
    char board[3][3] = {' ',' ',' ',
                        ' ',' ',' ',
                        ' ',' ',' ' };

    char player = 'X', position;
    bool valid_move;

    while(1) {
        print_board(board);

        printf("Player %c, Choose a position: ", player);
        scanf("%c", &position);
        while (getchar() != '\n'); // Clears input buffer
        switch (position) {
            case '1':
                if (board[0][0] == ' ')
                    board[0][0] = player;
                break;
            case '2':
                if (board[0][1] == ' ')
                    board[0][1] = player;
                break;
            case '3':
                if (board[0][2] == ' ')
                    board[0][2] = player;
                break;
            case '4':
                if (board[1][0] == ' ')
                    board[1][0] = player;
                break;
            case '5':
                if (board[1][1] == ' ')
                    board[1][1] = player;
                break;
            case '6':
                if (board[1][2] == ' ')
                    board[1][2] = player;
                break;
            case '7':
                if (board[2][0] == ' ')
                    board[2][0] = player;
                break;
            case '8':
                if (board[2][1] == ' ')
                    board[2][1] = player;
                break;
            case '9':
                if (board[2][2] == ' ')
                    board[2][2] = player;
                break;
            default:
                printf("Error: Wrong key entered\n");
                continue;
        }

        if (check_board(board) == 'X') {
            printf("Player X won!\n\n");
            break;
        }
        else if (check_board(board) == 'O') {
            printf("Player O won!\n\n");
            break;
        }
        if (board_full(board)) {
            printf("Draw!\n");
            break;
        }

        player = (player == 'X') ? 'O' : 'X';
    }

    return 0;
}

void print_board(char a[3][3])
{
    int i, j;
    printf("\n");
    
    // Prints current board
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf(" %c ", a[i][j]);
            if (j < 2) printf("|");
        }
        printf("\t");

        // Prints Positions
        for (j = 0; j < 3; j++) {
            printf(" %c ", template_board[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("---|---|---\t---|---|---\n");
    } 
    printf("\n");
}

char check_board(char a[3][3])
{
    // Checks diagonals
    if (a[0][0] == a[1][1] && a[0][0] == a[2][2]) {
        return a[0][0];
    } else if (a[0][2] == a[1][1] && a[0][2] == a[2][0]) {
        return a[0][2];
    }
    // Checks columns
    else if (a[0][0] == a[1][0] && a[0][0] == a[2][0]) {
        return a[0][0];
    } else if (a[0][1] == a[1][1] && a[0][1] == a[2][1]) {
        return a[0][1];
    } else if (a[0][2] == a[1][2] && a[0][2] == a[2][2]) {
        return a[0][2];
    }
    // Checks rows
    else if (a[0][0] == a[0][1] && a[0][0] == a[0][2]) {
        return a[0][0];
    } else if (a[1][0] == a[1][1] && a[1][0] == a[1][2]) {
        return a[1][0];
    } else if (a[2][0] == a[2][1] && a[2][0] == a[2][2]) {
        return a[2][0];
    }
    return ' ';
}

bool board_full(char a[3][3])
{
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (a[i][j] == ' ')
                return false;
        }
    }
    return true;
}
