// 4. Point of Sale System: Build a simple point of sale system using structures to
// represent products with attributes like name, price, and quantity. Allow users
// to add items to a cart and calculate the total cost.

#include<stdio.h>
typedef struct product{
     char name[40];
     int price;
     int quantity;
}product;
void addProduct(product*);
void main(){
    product cart[10];
    char choice;
    int index=0;
    int total=0;

    printf("Enter detail of product\n");
    printf("name price quantity\n");

    while(index<10){
        printf("Continue press ENTER ,To Stop press x :");
        if (getchar() == 'x')
        {
            break;
        }
        addProduct(&cart[index]);
        total += (cart[index].price * cart[index].quantity);
        index++;
    }
    
    printf("total Bill : %d\n",total);
}
void addProduct(product * p){
   printf("Enter product details:\n");
   printf("Name: ");
   
   getchar();
   fgets(p->name, sizeof(p->name), stdin);

   printf("Price: ");
   scanf("%d", &p->price);

   printf("Quantity: ");
   scanf("%d", &p->quantity);
}