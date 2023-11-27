// 51
// Description
// In a game of TicTacToe, two players take turns making an available cell in 3*3 grid with their respective tokens (player1 uses X and player2 uses O). When one player has placed three tokens in a horizontal, vertical, or diagonal row on the grid, the game is over and that player has won. A draw (no winner) occurs when all the cells on the grid have been filled with tokens and neither player has achieved a win. Create a program for playing TicTacToe as follows:

// Read in play step, in the following format:
// rowNum columnNum token
// rowNum, columnNum is one of 1, 2, 3.
// token is either X or O.
// rowNum, columnNum tells where the player place his token.
// For example, 3 1 X means player1 place his token X in row 3 column 1, 2 2 O means player2 place his token O in row 2 column 2..
// Whenever a play step is entered, the program refeshes the board and determines the status of the game (player1 win, player2 win, draw, or unfinished).
// Input
// The first line is a positive integer t for the number of test cases.
// Each test case contains n+1 lines. The line 1 contains an integer n (0<n<=9), means that the test case contains a n play step. Then followed n lines, each line contains a play step.

// Output
// For each test case, output "test case #testcaseNum:" in first line, then output another n lines. Each line is the status after the nth play step.

// Sample Input
// 2  
// 8  
// 2 2 X  
// 2 1 O  
// 3 3 X  
// 1 1 O  
// 1 3 X  
// 1 2 O  
// 3 1 X  
// 2 3 O  

// 9  
// 1 1 X  
// 2 2 O  
// 1 2 X  
// 1 3 O  
// 3 1 X  
// 2 1 O  
// 2 3 X  
// 3 2 O  
// 3 3 X  
// ​
// Sample Output
// test case 1:  
// unfinished  
// unfinished  
// unfinished  
// unfinished  
// unfinished  
// unfinished  
// player1 won  
// player1 won  
// test case 2:  
// unfinished  
// unfinished  
// unfinished  
// unfinished  
// unfinished  
// unfinished  
// unfinished  
// unfinished  
// draw  
// ​
// Hint
// Player1 plays firstly.


#include <stdio.h>
#include <string.h>

char board[3][3];
int turn;

int is_winner(char token) {
    int winning_combinations[8][3] = {
        {0, 1, 2}, {3, 4, 5}, {6, 7, 8},  // 水平
        {0, 3, 6}, {1, 4, 7}, {2, 5, 8},  // 垂直
        {0, 4, 8}, {2, 4, 6}              // 对角线
    };

    for (int i = 0; i < 8; i++) {
        int a = winning_combinations[i][0];
        int b = winning_combinations[i][1];
        int c = winning_combinations[i][2];

        if (board[a / 3][a % 3] == token && board[b / 3][b % 3] == token && board[c / 3][c % 3] == token) {
            return 1;
        }
    }

    return 0;
}



void play_step(int row, int col, char token) {
    
        board[row - 1][col - 1] = token;
        turn = (turn % 2) + 1;
    
}
void print_result(const char *result, int repeat) {
    for (int i = 0; i < repeat; i++) {
        printf("%s\n", result);
    }
}

void process_game(int n) {
    int game_over = 0;
    
    for (int i = 0; i < n; i++) {
        int row, col;
        char token;
        scanf("%d %d %c", &row, &col, &token);

        if (!game_over) 
        {
            play_step(row, col, (turn == 1) ? 'X' : 'O');

            if (is_winner('X')) 
            {
                print_result("player1 won", n - i);
                game_over = 1;
            } else if (is_winner('O')) 
            {
                print_result("player2 won", n - i);
                game_over = 1;
            } else if (i == n - 1) {
                printf("draw\n");
            } else {
                printf("unfinished\n");
            }
        }
    }
}

int main() {
    int t;
    scanf("%d", &t);

    for (int testcaseNum = 1; testcaseNum <= t; testcaseNum++) {
        memset(board, ' ', sizeof(board));
        turn = 1;
        int n;
        scanf("%d", &n);

        printf("test case %d:\n", testcaseNum);
        process_game(n);
    }

    return 0;
}
