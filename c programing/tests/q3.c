// 3. Develop a program to manage a music library. Define a structure to

// store song details (song ID, title, artist, and duration). Create a menu-
// driven program to add new songs and display the song library. Use

// functions to handle these operations.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct music
{
   int Id;
   char title[50];
   char artist[50];
   char duration[10];
} music;
music* add(music[],int*,int*);
void display(music[],int);
void musicDetail(music temp);
void menu();
void main()
{
   int capacity=10;
   int index=0;
   music* list=(music*)malloc(sizeof(music)*capacity);

   while(1){
      menu();
      int choice;
      printf("Enter a choice\n");
      scanf("%d",&choice);
      switch (choice)
      {
      case 1:
      {
         list=add(list,&index,&capacity);
         break;
      }
      case 2:
      {
         display(list,index);
         break;
      }
      default:
         printf("Enter correct menu\n");
         break;
      }
      if(choice==0){
         break;
      }
   }
}
music* add(music list[],int* index,int* capacity){
    if((*index)==(*capacity)){
      *capacity=(*capacity)*2;
      list=(music*)realloc(list,(*capacity)*sizeof(music));
    }
    music temp;
    printf("Enter id for music\n");
    scanf("%d",&temp.Id);
    
    for(int i=0;i<(*index);i++){
      if(temp.Id==list[i].Id){
         printf("Id is allredy present\n");
         return list;
      }
    }
    getchar();
    printf("Enter music title : ");
    fgets(temp.title,50,stdin);
    temp.title[strcspn(temp.title,"\n")]='\0';

    printf("Enter music artist : ");
    fgets(temp.artist, 50, stdin);
    temp.artist[strcspn(temp.artist, "\n")] = '\0';

    printf("Enter music duration : ");
    fgets(temp.duration, 10, stdin);
    temp.duration[strcspn(temp.duration, "\n")] = '\0';

    list[(*index)++]=temp;
    printf("music Added Successfully\n");
    return list;
}
void display(music list[],int index){
      getchar();
      for(int i=0;i<index;i++){
         printf("---------music %d----------\n",i+1);
         musicDetail(list[i]);
      }
}
void musicDetail(music temp){
   printf("music Id       : %d\n",temp.Id);
   printf("music title    : %s\n", temp.title);
   printf("music artist   : %s\n", temp.artist);
   printf("music duration : %s\n", temp.duration);
}
void menu(){

   printf("\n==========Music Menu========\n");
   printf("1 add Music\n");
   printf("2 display music List\n");
   printf("0 exit\n");

}