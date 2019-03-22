#include <iostream>
#include "Item.h"
#include "ShoppingCart.h"

int main() {
    Item item1("Unix", "Stationary", 2, 600);
    Item item2("CleanCode", "Stationary", 2, 600);
    Item item3("TDD", "Stationary", 2, 600);
    Item item4("XP", "Stationary", 2, 600);
    ShoppingCart shoppingCart;
    shoppingCart.addItem(&item1);
    shoppingCart.addItem(&item2);
    shoppingCart.addItem(&item3);
    shoppingCart.addItem(&item4);

    cout << "Total Gross Price is : "<< shoppingCart.totalPrice() << endl;
    cout << "Total GST : "<< shoppingCart.applyGST() << endl;
    cout << "Total Price After GST is : "<< shoppingCart.finalPrice() << endl;

    cout << "Display Added Items : " << endl;
    shoppingCart.displayItems();
    cout << "Remove Items : " << endl;
    shoppingCart.removeItem("TDD");
    cout << "Display Items After Removal : " << endl;
    shoppingCart.displayItems();
    return 0;
}