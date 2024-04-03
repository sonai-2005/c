#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void printBoard();
char board[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
int main()
{
  printBoard();
  int player = 1, input, status = -1;
  printBoard();
while(1 ==1 ){
  while (status == -1)
  { player = 1;
    char mark = (player == 1) ? 'x' : 'o'; // for player 1 we use x and second one is o
    printf("\nplease enter the number for player  x: %d      -", player);
    scanf("%d", &input);
    if (input > 9 || input < 1)
    { // fixing the input range
      printf("invalid input  :-(  \n");
      continue;
    }
    board[input] = mark; // for position specification
    printBoard();
    player =2;//for second player
   status = 1;}
   while(status == 1){
    char mark1 = (player == 1) ? 'x' : 'o'; // for player 1 we use x and second one is o
    printf("please enter the number for player  o: %d      -", player);
    scanf("%d", &input);
    if (input > 9 || input < 1)
    { // fixing the input range
      printf("invalid input  :-(  \n");
     printf("you lost your chance !! ");
     continue;
    }
    board[input] = mark1; // for position specification
    printBoard();
    status = -1;
    continue;
  }
}}
void printBoard()
{
  printf("==TIC TAC TOE==\n");
  printf("%c   |%c   |%c  \n", board[1], board[2], board[3]);
  printf("____|____|____\n");
  printf("%c   |%c   |%c  \n", board[4], board[5], board[6]);
  printf("____|____|____\n");
  printf("%c   |%c   |%c   \n", board[7], board[8], board[9]);
  printf("    |    |    \n");
}