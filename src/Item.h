#ifndef SHOPPINGCART_ITEM_H
#define SHOPPINGCART_ITEM_H

#include <string>

using namespace std;

class Item {
public:
    Item();
    Item(string name, string category, int quantity, double price);

    void setName(string name);
    void setCategory(string category);
    void setQuantity(int quantity);
    void setPrice(double price);

    string getName();
    string getCategory();
    int getQuantity();
    double getPrice();
private:
    string itemName;
    string itemCategory;
    int itemQuantity;
    double itemPrice;
};


#endif
