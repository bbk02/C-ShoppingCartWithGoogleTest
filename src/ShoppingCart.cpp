#include <clocale>
#include "ShoppingCart.h"

#include "ShoppingCart.h"

ShoppingCart::ShoppingCart()
{
    for(int i=0;i<100;i++)
    items[i] = NULL; // assign each array element to NULL
    items_count = 0;
}

void ShoppingCart::addItem(Item *tItem)
{
    items[items_count++] = tItem; //adding each item to array
}

double ShoppingCart::totalPrice()
{
    double totalPrice = 0;
    for(int i=0; i<items_count; i++) //repeat until end of items array
        totalPrice+=(items[i]->getQuantity()*items[i]->getPrice()); //calling price and quantity by get methods
    return totalPrice; //return totalPrice
}