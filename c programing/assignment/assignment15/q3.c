// 3. Write a program to create an array for 10 players. For each player store name, no. of
// matches played, runs, wickets takes.
// a. Create function to Accept the information of each player.
// b. Create function to display the information of all the players
// c. Display the information of player who made maximum runs and the one who took maximum number of wickets.
#include<stdio.h>
#include<stdlib.h>
typedef struct player{
   char name[40];
   int match_played;
   int runs;
   int wickets;
}player;

void addPlayersDetail(player*);
void fillPlayersDetail(player*,int);
void displayPlayer(player*);
void playerHaveMaxRun(player*,int);
void playerHaveMaxWicket(player *, int); 
void main()
{
   //  player p1[10];
   //  fillPlayersDetail(p1,4);
   //  for(int i=0;i<4;i++){
   //    displayPlayer(&p1,i);
   //  }
   player dummy[10] = {
       {"Virat Kohli", 275, 13000, 4},
       {"Rohit Sharma", 250, 11000, 8},
       {"MS Dhoni", 350, 10500, 1},
       {"KL Rahul", 150, 6000, 0},
       {"Hardik Pandya", 120, 3000, 60},
       {"Ravindra Jadeja", 200, 2800, 190},
       {"Jasprit Bumrah", 100, 200, 150},
       {"Shubman Gill", 80, 35000, 0},
       {"Suryakumar Yadav", 90, 3200, 0},
       {"Rishabh Pant", 110, 4000, 5}};
      for (int i = 0; i < 10; i++)
         {
            displayPlayer(&dummy[i]);
      }
      playerHaveMaxRun(dummy, 10);
      playerHaveMaxWicket(dummy, 10);
   }
void addPlayersDetail(player* p){
   printf("Enter players details\n");
   printf("Name : ");
   fgets(p->name,sizeof(p->name),stdin);

   printf("Match_played : ");
   scanf("%d",&p->match_played);

   printf("runs : ");
   scanf("%d", &p->runs);

   printf("wickets : ");
   scanf("%d", &p->wickets);

   
}
void fillPlayersDetail(player* parr,int size){
   for(int i=0;i<size;i++){
      addPlayersDetail(&parr[i]);
      getchar();
   }
}
void displayPlayer(player* p){
   printf("\nPlayer Details:\n");
   printf("Name          : %s\n", p->name);
   printf("Matches Played: %d\n", p->match_played);
   printf("Runs          : %d\n", p->runs);
   printf("Wickets       : %d\n", p->wickets);
}
void playerHaveMaxRun(player* p,int size){
      int max=0;
      int index=0;
      for(int i=0;i<size;i++){
         if(p[i].runs>max){
            max = p[i].runs;
            index=i;
         }
      }
      printf("\nPlayer who have max run :\n");
      printf("Name          : %s\n", p[index].name);
      printf("Matches Played: %d\n", p[index].match_played);
      printf("Runs          : %d\n", p[index].runs);
      printf("Wickets       : %d\n", p[index].wickets);
}
void playerHaveMaxWicket(player *p, int size)
{
   int wickets = 0;
   int index = 0;
   for (int i = 0; i < size; i++)
   {
      if (p[i].wickets > wickets)
      {
         wickets = p[i].wickets;
         index = i;
      }
   }
   printf("\nPlayer who have max wicket :\n");
   printf("Name          : %s\n", p[index].name);
   printf("Matches Played: %d\n", p[index].match_played);
   printf("Runs          : %d\n", p[index].runs);
   printf("Wickets       : %d\n", p[index].wickets);
}