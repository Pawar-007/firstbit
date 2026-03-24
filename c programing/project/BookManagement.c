#include<stdio.h>

typedef struct book
{
   int id;
   char name[50];
   char AutherName[30];
   char catefory[30];
   int price;
   int rating;
}book;

book* database;
int capacity=10;

void add();
void removeById(int);
void searchBook(int,char[]);
void updateBookPrice(int,int);
void bookCategoryList(char[]);

void main(){
     database=(book*)malloc(capacity*sizeof(book));
     if(database==NULL){
      printf("book list not Present");
      return;
     }
     int check;
     printf("To interact with software press key according to requirement\n");
     printf("1 add\n2 removeById\n3 searchBook\n4 updateBookPrice\n5 ");
     while (1)
     {
      printf("0");
     }
     
}