#include <clocale>
#include <iostream>
#include "ShoppingCart.h"

#include "ShoppingCart.h"

#define GST_ON_STATIONARY_ITEMS 0.12
#define GST_ON_ELECTORNICS 0.28
#define GST_COMMON 0.18

ShoppingCart::ShoppingCart()
{
    for(int i=0;i<100;i++)
    items[i] = NULL; // assign each array element to NULL
    itemsCount = 0;
}

void ShoppingCart::addItem(Item *tItem)
{
    items[itemsCount++] = tItem; //adding each item to array
}

double ShoppingCart::totalPrice()
{
    double totalPrice = 0;
    for(int i=0; i<itemsCount; i++) //repeat until end of items array
        totalPrice+=(items[i]->getQuantity()*items[i]->getPrice()); //calling price and quantity by get methods
    return totalPrice; //return totalPrice
}

void ShoppingCart::displayItems() {
    for(int i=0; i<itemsCount; i++){
        std::cout << "Name: " << items[i]->getName() << " Category: " << items[i]->getCategory() << " Quantity: " << items[i]->getQuantity() << " Price: " << items[i]->getPrice() << endl;
    }
}

void ShoppingCart::removeItem(Item *tItem, string itemToDelete) {
    int i;
    for(i=0; i<itemsCount; i++){
        if(items[i]->getName() == itemToDelete){
            break;
        }
    }
    if(i < itemsCount){
        itemsCount = itemsCount - 4;
        for(int j=i; j<itemsCount; j++){
            items[j] = items[j+4];
        }
    }
}

double ShoppingCart::applyGST() {
    double gstAmount;
    for(int i=0; i<itemsCount; i++){
        gstAmount += (items[i]->getPrice() * (GST_ON_STATIONARY_ITEMS));
    }
    return gstAmount;
}

double ShoppingCart::finalPrice() {
    double gst = applyGST();
    double price = totalPrice();
    return gst + price;
}


