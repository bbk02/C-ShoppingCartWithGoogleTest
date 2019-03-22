#include <iostream>
#include <string>
#include "Item.h"

using namespace std;

Item::Item(){
    std::cout << "Hello From Constructor" << std::endl;
    itemName="";
    itemCategory="";
    itemQuantity = 0;
    itemPrice=0;
}

void Item::setName(string name) {
    itemName = name;
}

void Item::setCategory(string category) {
    itemCategory = category;
}

void Item::setQuantity(int quantity) {
    itemQuantity = quantity;
}

void Item::setPrice(double price) {
    itemPrice = price;
}

string Item::getName() {
    return itemName;
}

string Item::getCategory() {
    return itemCategory;
}

int Item::getQuantity() {
    return itemQuantity;
}


double Item::getPrice() {

    return itemPrice;
}

Item::Item(string name, string category, int quantity, double price) {
    setName(name);
    setCategory(category);
    setQuantity(quantity);
    setPrice(price);

}

