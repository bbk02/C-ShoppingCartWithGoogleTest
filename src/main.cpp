#include <iostream>
#include "Item.h"
#include "ShoppingCart.h"

int main() {
    Item item1("Unix", "Book", 2, 600);
    Item item2("Unix", "Book", 2, 600);
    Item item3("Unix", "Book", 2, 600);
    Item item4("Unix", "Book", 2, 600);
    ShoppingCart shoppingCart;
    shoppingCart.addItem(&item1);
    shoppingCart.addItem(&item2);
    shoppingCart.addItem(&item3);
    shoppingCart.addItem(&item4);
    double totalPrice = shoppingCart.totalPrice();
    cout<<"Total price is : "<<totalPrice;
    return 0;
}