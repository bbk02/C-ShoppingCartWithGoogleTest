#include <iostream>
#include "Item.h"
#include "ShoppingCart.h"

int main() {
    Item a("Unix", "Book", 2, 600);
    Item b("Unix", "Book", 2, 600);
    Item c("Unix", "Book", 2, 600);
    Item d("Unix", "Book", 2, 600);
    ShoppingCart sc1;
    sc1.addItem(&a);
    sc1.addItem(&b);
    sc1.addItem(&c);
    sc1.addItem(&d);
    double diff = sc1.totalPrice();
    cout<<"Total price is : "<<diff;
    return 0;
}