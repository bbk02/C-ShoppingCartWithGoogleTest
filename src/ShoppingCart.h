#ifndef SHOPPINGCART_SHOPPINGCART_H
#define SHOPPINGCART_SHOPPINGCART_H


#include "Item.h"

class ShoppingCart {
public:
    ShoppingCart();

    void addItem(Item *tItem);
    double totalPrice();

private:
    Item *items[100]; //declare 100 items of pointers
    int arrayEnd;//for end of array
};


#endif
