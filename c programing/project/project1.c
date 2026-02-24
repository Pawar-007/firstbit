#include<stdio.h>
#include <stdlib.h>
#include <conio.h>
int isPresentInColumn(int arr[9][9],int col,int num){

      for(int i=0;i<9;i++){
         if(arr[i][col]==num){
            return 1;
         }
      }
      return 0;
}
int isPresentInRow(int arr[9][9], int row, int num)
{

   for (int i = 0; i < 9; i++)
   {
      
      if (arr[row][i] == num)
      {
         return 1;
      }
   }
   return 0;
}
void printMatrix(int puzzle[9][9]){
   for (int i = 0; i < 9; i++)
   {
      for (int j = 0; j < 9; j++)
      {
         if (j == 3 || j == 6)
            printf(" ");
         printf("%d ", puzzle[i][j]);
      }
      if (i == 2 || i == 5)
         printf("\n");
      printf("\n");
   }
}

int isPresentInMatrix(int puzzle[9][9],int row,int col,int num){
   int startRow = row - row % 3;
   int startCol = col - col % 3;

   for(int i=0;i<3;i++){
      for(int j=0;j<3;j++){
         if(puzzle[startRow+i][startCol+j]==num) return 1;
      }
   }
   return 0;
}
int isBoardFull(int puzzle[9][9])
{
   for (int i = 0; i < 9; i++)
   {
      for (int j = 0; j < 9; j++)
      {
         if (puzzle[i][j] == 0)
            return 0;
      }
   }
   return 1;
}
void main()
{
   int puzzle[9][9] = {
       {5, 3, 0, 0, 7, 0, 0, 0, 0},
       {6, 0, 0, 1, 9, 5, 0, 0, 0},
       {0, 9, 8, 0, 0, 0, 0, 6, 0},
       {8, 0, 0, 0, 6, 0, 0, 0, 3},
       {4, 0, 0, 8, 0, 3, 0, 0, 1},
       {7, 0, 0, 0, 2, 0, 0, 0, 6},
       {0, 6, 0, 0, 0, 0, 2, 8, 0},
       {0, 0, 0, 4, 1, 9, 0, 0, 5},
       {0, 0, 0, 0, 8, 0, 0, 7, 9}};

   printMatrix(puzzle);
   char stop;
   printf("for start game press any key (q to quit)\n");
   stop = getch();
   while(stop!='q'){
      int row,col,num;
      printf("Enter in which position you want to enter number row*col and num\n");
      scanf("%d %d %d", &row, &col, &num);
      
      if(puzzle[row-1][col-1]!=0){
         printf("place is allready field by %d\n", puzzle[row - 1][col - 1]);
      }
      else if(isPresentInRow(puzzle,row-1,num)){
          printf("place is field in row\n");
      }
      else if (isPresentInColumn(puzzle, col-1, num)){
         printf("place is field in column\n");
      }
      else if(isPresentInMatrix(puzzle,row-1,col-1,num)){
         printf("number is present in 3x3 box\n");
      }
      else
      {
         puzzle[row-1][col-1] = num;
      }
      if (isBoardFull(puzzle))
      {
         printf("You win!\n");
         break;
      }
      printf("Press any key to continue (q to quit)\n");
      stop = getch();
      
      printMatrix(puzzle);
   }
}