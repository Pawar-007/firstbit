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
void bookCategoryList(book[], char[], int);
void searchBookBYId(book[], int, int);
void searchBookBYName(book[], char[], int);
void dispaly(book[], int);
void sortBooks();
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

   printf("To interact with software press key according to requirement\n");
   printf("1 add\n2 removeById\n3 searchBook\n4 updateBookPrice\n5 Display Books\n");
   while (1)
   {
      printf("Enter a Menu : ");
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
            break;
         }
         else if (choice == 2)
         {
            char bname[30];
            getchar();
            printf("Enter Book name\n");
            fgets(bname, 30, stdin);
            bname[strcspn(bname, "\n")] = 0;
            searchBookBYName(database, bname, index);
            break;
         }
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
         updateBookPrice(database, bid, index);
         break;
      }
      default:
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

   printf("Enter book rating\n");
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
   while (i <= (*index))
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
      printf("ID           : %d\n", database[i].id);
      printf("Book Name    : %s\n", database[i].bookname);
      printf("Author Name  : %s\n", database[i].AutherName);
      printf("Category     : %s\n", database[i].category);
      printf("Price        : %d\n", database[i].price);
      printf("Rating       : %d/5\n", database[i].rating);
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
         printf("ID           : %d\n", database[i].id);
         printf("Book Name    : %s\n", database[i].bookname);
         printf("Author Name  : %s\n", database[i].AutherName);
         printf("Category     : %s\n", database[i].category);
         printf("Price        : %d\n", database[i].price);
         printf("Rating       : %d/5\n", database[i].rating);
         return;
      }
   }
   printf("Book Not present in list\n");
}
void searchBookBYName(book database[], char name[], int size)
{
   for (int i = 0; i < size; i++)
   {
      if (strcmp(database[i].bookname, name) == 0)
      {
         printf("\n-------------------- Book %d --------------------\n", i + 1);
         printf("ID           : %d\n", database[i].id);
         printf("Book Name    : %s\n", database[i].bookname);
         printf("Author Name  : %s\n", database[i].AutherName);
         printf("Category     : %s\n", database[i].category);
         printf("Price        : %d\n", database[i].price);
         printf("Rating       : %d/5\n", database[i].rating);
         return;
      }
   }
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
         printf("ID           : %d\n", database[i].id);
         printf("Book Name    : %s\n", database[i].bookname);
         printf("Author Name  : %s\n", database[i].AutherName);
         printf("Category     : %s\n", database[i].category);
         printf("Price        : %d\n", database[i].price);
         printf("Rating       : %d/5\n", database[i].rating);
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
   if (i > index)
   {
      printf("Book id not present \n");
      return;
   }
   database[i].price = newPrice;
   printf("Book price is updated\n");
   printf("\n-------------------- Book %d --------------------\n", i + 1);
   printf("ID           : %d\n", database[i].id);
   printf("Book Name    : %s\n", database[i].bookname);
   printf("Author Name  : %s\n", database[i].AutherName);
   printf("Category     : %s\n", database[i].category);
   printf("Price        : %d\n", database[i].price);
   printf("Rating       : %d/5\n", database[i].rating);
}