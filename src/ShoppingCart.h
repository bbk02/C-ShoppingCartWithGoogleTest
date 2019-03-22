#ifndef SHOPPINGCART_SHOPPINGCART_H
#define SHOPPINGCART_SHOPPINGCART_H


#include "Item.h"

class ShoppingCart {
public:
    ShoppingCart();

    void addItem(Item *tItem);
    void displayItems();
    void removeItem(string itemToDelete);
    double totalPrice();
    double applyGST();
    double finalPrice();

private:
    Item *items[100]; //declare 100 items of pointers
    int itemsCount;//for end of array
};


#endif
