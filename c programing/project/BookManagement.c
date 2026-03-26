#include <stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct book
{
   int id;
   char name[50];
   char bookname[30];
   char AutherName[30];
   char category[30];
   int price;
   int rating;
} book;


void add(book[],int*,int*);
void removeById(book[],int*);
void searchBook(book[],int, char[], int);
void updateBookPrice(int, int);
void bookCategoryList(book[],char[],int);
void dispaly(book[],int); 
void main()
{
   int capacity = 10;
   int index = 0;
   book *database=(book *)malloc(capacity * sizeof(book));
   if (database == NULL)
   {
      printf("book list not Present");
      return;
   }
   database[0] = (book){1, "Rahul", "C Programming", "Dennis Ritchie", "Programming", 500, 5};
   database[1] = (book){2, "Amit", "Java Basics", "James Gosling", "Programming", 600, 4};
   database[2] = (book){3, "Sneha", "Python Guide", "Guido van Rossum", "Programming", 550, 5};
   database[3] = (book){4, "Priya", "Data Structures", "Mark Allen", "CS", 700, 4};
   database[4] = (book){5, "Rohit", "Algorithms", "CLRS", "CS", 800, 5};
   database[5] = (book){6, "Neha", "DBMS", "Korth", "Database", 650, 4};
   database[6] = (book){7, "Arjun", "Operating System", "Galvin", "CS", 750, 5};
   database[7] = (book){8, "Kiran", "Computer Networks", "Tanenbaum", "Networking", 720, 4};
   database[8] = (book){9, "Pooja", "AI Basics", "Stuart Russell", "AI", 900, 5};
   database[9] = (book){10, "Vikas", "Machine Learning", "Andrew Ng", "AI", 950, 5};

   index = 10;

   searchBook(database,6,"Neha",index);
   printf("To interact with software press key according to requirement\n");
   printf("1 add\n2 removeById\n3 searchBook\n4 updateBookPrice\n5 ");
   while (1)
   {
      int choice;
      scanf("%d", &choice);
      switch (choice)
      {
      case 1:
      {
         add(database,&index,&capacity);
         break;
      }
      case 2:
      {
         removeById(database,&index);
         break;
      }
      case 3:
      {
         int bid;
         char bname[30];
         printf("Enter Book Id\n");
         scanf("%d",&bid);
         getchar();
         printf("Enter Book name\n");
         fgets(bname,30,stdin);
         searchBook(database,bid,bname,index);
         break;
      }
      case 4:
      {
         char catogery[30];
         getchar(); 
         printf("Enter Book Catogery\n");
         fgets(catogery,30, stdin);
         bookCategoryList(database, catogery, index);
         break;
      }
      default:
         break;
      }
   }
   
}
void add(book database[],int* index,int* capacity)
{
   if(*index>=*capacity){
      *capacity=*capacity*2;
      database=realloc(database,*capacity*sizeof(book));
   }
   book temp;
   printf("Enter book ID\n");
   scanf("%d", &temp.id);
   printf("Enter book Name\n");
   fgets(temp.bookname,50,stdin);
   printf("Enter book Auther Name\n");
   fgets(temp.AutherName, 50, stdin);
   printf("Enter book category\n");
   fgets(temp.category, 50, stdin);
   printf("Enter book price\n");
   scanf("%d", &temp.price);
   printf("Enter book rating\n");
   scanf("%d", &temp.rating);
   database[*index++] = temp;

   printf("Book Addes successfully");
}
void removeById(book database[],int* index){
     int id;
     printf("Enter Id of book");
     scanf("%d",&id);
     int i=0;
     while(i<=*index){
      if(database[i].id==id){
          break;
      }
      i++;
     }
     if(i>*index){
      printf("Book is not present in List");
      return ;
     }

     while(i<((*index)-1)){
      database[i]=database[i+1];
      i++;
     }
     *index--;
     printf("book is successfully removeed by array");
}
void dispaly(book database[], int size)
{

   printf("\n==================== BOOK DATABASE ====================\n");

   for (int i = 0; i < size; i++)
   {
      printf("\n-------------------- Book %d --------------------\n", i + 1);
      printf("ID           : %d\n", database[i].id);
      printf("Student Name : %s\n", database[i].name);
      printf("Book Name    : %s\n", database[i].bookname);
      printf("Author Name  : %s\n", database[i].AutherName);
      printf("Category     : %s\n", database[i].category);
      printf("Price        : %d\n", database[i].price);
      printf("Rating       : %d/5\n", database[i].rating);
   }

   printf("\n=======================================================\n");
}
void searchBook(book database[],int id, char name[],int size){
   for(int i=0;i<size;i++){
      if(database[i].id==id && strcmp(database[i].bookname,name)==0){
         printf("\n-------------------- Book %d --------------------\n", i + 1);
         printf("ID           : %d\n", database[i].id);
         printf("Student Name : %s\n", database[i].name);
         printf("Book Name    : %s\n", database[i].bookname);
         printf("Author Name  : %s\n", database[i].AutherName);
         printf("Category     : %s\n", database[i].category);
         printf("Price        : %d\n", database[i].price);
         printf("Rating       : %d/5\n", database[i].rating);
         return;
      }
   }
   printf("Book Not present in list");
}
void bookCategoryList(book database[],char catogery[],int size){
   for(int i=0;i<=size;i++){
      if (strcmp(database[i].category, catogery) == 0)
      {
         printf("\n-------------------- Book %d --------------------\n", i + 1);
         printf("ID           : %d\n", database[i].id);
         printf("Student Name : %s\n", database[i].name);
         printf("Book Name    : %s\n", database[i].bookname);
         printf("Author Name  : %s\n", database[i].AutherName);
         printf("Category     : %s\n", database[i].category);
         printf("Price        : %d\n", database[i].price);
         printf("Rating       : %d/5\n", database[i].rating);
      }
   }
}