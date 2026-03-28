#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct book
{
   int id;
   char bookname[30];
   char AutherName[30];
   char category[30];
   int price;
   int rating;
} book;

book *add(book[], int *, int *);
void removeById(book[], int *);
void updateBookPrice(book[], int, int);
void updateBookRating(book[], int, int);
void bookCategoryList(book[], char[], int);
void searchBookBYId(book[], int, int);
void searchBookBYName(book[], char[], int);
void dispaly(book[], int);
void sortBooks(book[], int, char[],int);
void printMenu();
void showBookDetails(book);
void showAutherBooks(book[],int);
void main()
{
   int capacity = 10;
   int index = 0;
   book *database = (book *)malloc(capacity * sizeof(book));
   if (database == NULL)
   {
      printf("book list not Present");
      return;
   }

   database[0] = (book){1, "c programming", "dennis ritchie", "programming", 500, 5};
   database[1] = (book){2, "java basics", "james gosling", "programming", 600, 4};
   database[2] = (book){3, "python guide", "guido van rossum", "programming", 550, 5};
   database[3] = (book){4, "data structures", "mark allen", "cs", 700, 4};
   database[4] = (book){5, "algorithms", "clrs", "cs", 800, 5};
   database[5] = (book){6, "dbms", "korth", "database", 650, 4};
   database[6] = (book){7, "operating system", "galvin", "cs", 750, 5};
   database[7] = (book){8, "computer networks", "tanenbaum", "networking", 720, 4};
   database[8] = (book){9, "ai basics", "stuart russell", "ai", 900, 5};
   database[9] = (book){10, "machine learning", "andrew ng", "ai", 950, 5};
   index = 10;
   
   while (1)
   {
      printf("For menu press 1 OR for continue press 0\n");
      int show;
      scanf("%d",&show);
      if(show){
         printMenu();
      }
      else{
         printf("Enter a choice : \n");
      }
      
      int choice;
      scanf("%d", &choice);

      switch (choice)
      {
      case 1:
      {
         database = add(database, &index, &capacity);
         break;
      }
      case 2:
      {
         removeById(database, &index);
         break;
      }
      case 3:
      {
         printf("search using id press 1\n");
         printf("search using name press 2\n");
         int choice;
         scanf("%d", &choice);
         if (choice == 1)
         {
            int bid;
            printf("Enter Book Id\n");
            scanf("%d", &bid);
            searchBookBYId(database, bid, index);
         }
         else if (choice == 2)
         {
            char bname[30];
            getchar();
            printf("Enter Book name\n");
            fgets(bname, 30, stdin);
            bname[strcspn(bname, "\n")] = 0;
            searchBookBYName(database, bname, index);
         }
         break;
      }
      case 4:
      {

         char catogery[30];
         getchar();
         printf("Enter Book Catogery\n");
         fgets(catogery, 30, stdin);
         catogery[strcspn(catogery, "\n")] = 0;
         bookCategoryList(database, catogery, index);
         break;
      }
      case 5:
      {
         dispaly(database, index);
         break;
      }
      case 6:
      {
         int bid;
         printf("Enter Book Id\n");
         scanf("%d", &bid);
         int choice;
         printf("For Update Rating press 1\n");
         printf("For Update price press 2\n");
         scanf("%d",&choice);
         if(choice==1){
            updateBookRating(database, bid, index);
         }
         else if(choice==2){
            updateBookPrice(database, bid, index);
         }
         break;
      }
      case 7:
      {
         printf("=====================================\n");
         printf("For sort by price press 1\n");
         printf("For sort by rating press 2\n");
         int num;
         char choice[30];
         scanf("%d",&num);
         if(num==1){
            strcpy(choice,"price");
         }
         else if(num==2){
            strcpy(choice,"rating");
         }
         printf("For DESC press 1\n");
         printf("For ASC press 2\n");
         scanf("%d",&num);
         sortBooks(database, index,choice,num);
         break;
      }
      case 8:
      {
         showAutherBooks(database,index);
         break;
      }
      default:{
         printf("choose correct option\n");
         break;
      }

      }
      if(choice==0){
         break;
      }
   }
}
book *add(book database[], int *index, int *capacity)
{
   if (*index >= *capacity)
   {
      *capacity = *capacity * 2;
      database = realloc(database, *capacity * sizeof(book));
   }
   book temp;
   printf("Enter book ID\n");
   scanf("%d", &temp.id);

   for (int i = 0; i < (*index); i++)
   {
      if (database[i].id == temp.id)
      {
         printf("Book Id is All ready present in database\n");
         return database;
      }
   }

   getchar();
   printf("Enter book Name\n");
   fgets(temp.bookname, 50, stdin);
   temp.bookname[strcspn(temp.bookname, "\n")] = 0;

   printf("Enter book Auther Name\n");
   fgets(temp.AutherName, 50, stdin);
   temp.AutherName[strcspn(temp.AutherName, "\n")] = 0;

   printf("Enter book category\n");
   fgets(temp.category, 50, stdin);
   temp.category[strcspn(temp.category, "\n")] = 0;

   printf("Enter book price\n");
   scanf("%d", &temp.price);

   printf("Enter book rating from ) 0 to 5\n");
   scanf("%d", &temp.rating);

   database[(*index)++] = temp;
   printf("Book Addes successfully\n");
   return database;
}
void removeById(book database[], int *index)
{
   int id;
   printf("Enter Id of book : ");
   scanf("%d", &id);
   int i = 0;
   while (i < (*index))
   {
      if (database[i].id == id)
      {
         break;
      }
      i++;
   }
   if (i > (*index))
   {
      printf("Book is not present in List\n");
      return;
   }

   while (i < ((*index) - 1))
   {
      database[i] = database[i + 1];
      i++;
   }
   (*index)--;
   printf("book is successfully removeed by array\n");
}
void dispaly(book database[], int size)
{

   printf("\n==================== BOOK DATABASE ====================\n");

   for (int i = 0; i < size; i++)
   {
      printf("\n-------------------- Book %d --------------------\n", i + 1);
      showBookDetails(database[i]);
   }

   printf("\n=======================================================\n");
}
void searchBookBYId(book database[], int id, int size)
{
   for (int i = 0; i < size; i++)
   {
      if (database[i].id == id)
      {
         printf("\n-------------------- Book %d --------------------\n", i + 1);
         showBookDetails(database[i]);
         return;
      }
   }
   printf("Book Not present in list\n");
}
void searchBookBYName(book database[], char name[], int size)
{
   int found=0;
   for (int i = 0; i < size; i++)
   {
      if (strcmp(database[i].bookname, name) == 0)
      {
         printf("\n-------------------- Book %d --------------------\n", i + 1);
         showBookDetails(database[i]);
         found=1;
      }
   }
   if(!found)
   printf("Book Not present in list\n");
}
void bookCategoryList(book database[], char catogery[], int size)
{
   int found = 0;
   for (int i = 0; i < size; i++)
   {
      if (strcmp(database[i].category, catogery) == 0)
      {
         found = 1;
         printf("\n-------------------- Book %d --------------------\n", i + 1);
         showBookDetails(database[i]);
      }
   }
   if (!found)
   {
      printf("This catogery book is not present in list\n");
   }
}
void updateBookPrice(book database[], int id, int index)
{
   int newPrice;
   getchar();
   printf("Enter new price\n");
   scanf("%d", &newPrice);
   int i = 0;
   while (i < index && database[i].id != id)
      i++;
   if (i == index)
   {
      printf("Book id not present \n");
      return;
   }
   database[i].price = newPrice;
   printf("Book price is updated\n");
   printf("\n-------------------- Book %d --------------------\n", i + 1);
   showBookDetails(database[i]);
}
void updateBookRating(book database[], int id, int index)
{
   int rating;
   getchar();
   printf("Enter new Rating\n");
   scanf("%d", &rating);
   int i = 0;
   while (i < index && database[i].id != id)
      i++;
   if (i > index)
   {
      printf("Book id not present \n");
      return;
   }
   database[i].rating = rating;
   printf("Book rating is updated\n");
   printf("\n-------------------- Book %d --------------------\n", i + 1);
   showBookDetails(database[i]);
}
void printMenu()
{
   printf("=====================================\n");
   printf("BOOK MANAGEMENT SYSTEM\n\n");
   printf("1. Add New Book\n");
   printf("2. Remove Book (By ID)\n");
   printf("3. Search Book\n");
   printf("4. Display Books by Category\n");
   printf("5. Display All Books\n");
   printf("6. Update Book\n");
   printf("7. Sort Books\n");
   printf("8. Dispaly Auther Books\n");
   printf("0. Exit\n");
   printf("=====================================\n");
   printf("Enter your choice: ");
}
void showBookDetails(book bookdata){
   printf("ID           : %d\n", bookdata.id);
   printf("Book Name    : %s\n", bookdata.bookname);
   printf("Author Name  : %s\n", bookdata.AutherName);
   printf("Category     : %s\n", bookdata.category);
   printf("Price        : %d\n", bookdata.price);
   printf("Rating       : %d/5\n", bookdata.rating);
}
void sortBooks(book database[], int index, char choice[], int order)
{
      book temp[index];
      for (int i = 0; i < index; i++)
      {
         temp[i]=database[i];
      }
      if(strcmp(choice,"price")==0){
            if(order==1){
               for (int i = index - 1; i > 0; i--)
               {
                  for (int j = 0; j < i; j++)
                  {
                     if (temp[j].price < temp[j + 1].price)
                     {
                        book x = temp[j];
                        temp[j] = temp[j + 1];
                        temp[j + 1] = x;
                     }
                  }
               }
            }
            else if(order==2){
               for(int i=index-1;i>0;i--)
               {
                  for (int j=0;j<i;j++)
                  {
                     if (temp[j].price>temp[j + 1].price)
                     {
                        book x=temp[j];
                        temp[j]=temp[j + 1];
                        temp[j+1] = x;
                     }
                  }
               }
            }
      }
      else if(strcmp(choice,"rating") == 0)
      {
         if(order == 1)
         {
            for(int i=index-1;i>0;i--)
            {
               for (int j=0;j<i;j++)
               {
                  if (temp[j].rating<temp[j+1].rating)
                  {
                     book x=temp[j];
                     temp[j]=temp[j+1];
                     temp[j+1]=x;
                  }
               }
            }
         }
         else if (order==2)
         {
            for (int i=index-1;i>0;i--)
            {
               for (int j=0;j<i;j++)
               {
                  if (temp[j].rating > temp[j + 1].rating)
                  {
                     book x = temp[j];
                     temp[j] = temp[j+1];
                     temp[j+1]=x;
                  }
               }
            }
         }
      }
     for(int i=0;i<index;i++){
        printf("=====================================\n");
        showBookDetails(temp[i]);
     }
}
void showAutherBooks(book database[], int index){
   char auther[30];
   getchar();
   printf("Enter Auther name : ");
   fgets(auther,30,stdin);
   auther[strcspn(auther,"\n")]=0;
   for(int i=0;i<index;i++){
      if(strcmp(auther,database[i].AutherName)==0){
         showBookDetails(database[i]);
      }
   }
}