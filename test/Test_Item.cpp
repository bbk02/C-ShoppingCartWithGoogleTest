#include <gtest/gtest.h>
#include "../src/Item.h"
#include "../src/ShoppingCart.h"

TEST(Item,  givenAnEmptyShoppingCart_whenNoItemAdded_thenTotalItemQuantityIsZero)
{
    Item item;
    ASSERT_EQ(0,item.getQuantity());
}

TEST(Item, givenAnEmptyShoppingCart_whenOneItemAdded_thenRetunTotalPrice)
{
    Item item1("Unix", "Stationary", 1, 600);
    ShoppingCart shoppingCart;
    shoppingCart.addItem(&item1);

    ASSERT_EQ(1, item1.getQuantity());
    ASSERT_EQ(600, shoppingCart.totalPrice());
}

TEST(Item, givenAnEmptyShoppingCart_whenTwoItemsAdded_thenRetunTotalPrice)
{
    Item item1("Pen", "Stationary", 2, 60);
    Item item2("USB Cable", "Electronics", 1, 300);
    ShoppingCart shoppingCart;
    shoppingCart.addItem(&item1);
    shoppingCart.addItem(&item2);

    ASSERT_EQ(2, item1.getQuantity());
    ASSERT_EQ(420, shoppingCart.totalPrice());
}

TEST(Item, givenElectronicsItemAdded_whenAppliedGST_thenRelevantGSTGetsApplied)
{
    Item item1("USB Cable", "Electronics", 1, 300);
    ShoppingCart shoppingCart;
    shoppingCart.addItem(&item1);
    ASSERT_EQ((item1.getPrice() * GST_ON_ELECTORNICS), shoppingCart.applyGST());
}

TEST(Item, givenOneItemAdded_WhenOneItemRemoved_thenTotalItemQuantityIsZero)
{
    Item item1("USB Cable", "Electronics", 1, 300);
    ShoppingCart shoppingCart;
    shoppingCart.addItem(&item1);
    ASSERT_EQ(1, item1.getQuantity());
    shoppingCart.removeItem("USB Cable");
    ASSERT_EQ(0, item1.getQuantity());
}