#include <gtest/gtest.h>
#include "../src/Item.cpp"
#include "../src/ShoppingCart.h"
#include "../src/ShoppingCart.cpp"

TEST(ItemPrice, Item_TotalPrice_Test)
{
    Item test("Unix", "Book", 2, 600);
    ShoppingCart testShoppingCart;
    testShoppingCart.addItem(&test);
    ASSERT_EQ(1200, testShoppingCart.totalPrice());
}