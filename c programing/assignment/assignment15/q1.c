// 1. Create a structure Book with data members as bname, id, author, price. Accept the
// values of all these members from user and display them.
#include<stdio.h>
typedef struct Book{
   char bname[20];
   int id;
   char auther[20];
   float price;
}Books;
void main(){
   Books b;
   printf("print books info \n");

   printf("Book_name : ");
   fgets(b.bname, sizeof(b.bname), stdin);

   printf("Book_id : ");
   scanf("%d",&b.id);
   getchar();

   printf("Book_auther : ");
   fgets(b.auther, sizeof(b.auther), stdin);

   printf("Book_price");
   scanf("%f", &b.price);

   printf("\nBook details\n");
   printf("Name = %sID = %d\nAuthor = %sPrice = %.2f\n",
          b.bname, b.id, b.auther, b.price);
}