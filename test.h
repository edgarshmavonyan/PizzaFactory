#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "ordermanager.h"

TEST(diablo, pizzaTest) {
    CDiabloPizzaBuilder builder;
    builder.createPizza();
    builder.build_dough();
    builder.build_sauce();
    builder.build_ingredients();
    builder.build_price();
    auto pizza = builder.getPizza();
    EXPECT_EQ(pizza->GetDough(), "thick");
    EXPECT_EQ(pizza->GetSauce(), "hot");
    EXPECT_EQ(pizza->GetIngredients(), "Pepperoni Frankfurter Red chilli Mozzarella ");
    EXPECT_EQ(PriceList::DIABLO, pizza->GetPrice());
}

TEST(hawaiian, pizzaTest) {
    CHawaiianPizzaBuilder builder;
    builder.createPizza();
    builder.build_dough();
    builder.build_sauce();
    builder.build_ingredients();
    builder.build_price();
    auto pizza = builder.getPizza();
    EXPECT_EQ(pizza->GetDough(), "basic");
    EXPECT_EQ(pizza->GetSauce(), "sweet");
    EXPECT_EQ(pizza->GetIngredients(), "Pineapple Bacon Ham Mozzarella ");
    EXPECT_EQ(PriceList::HAWAIIAN, pizza->GetPrice());
}

TEST(margarita, pizzaTest) {
    CMargaritaPizzaBuilder builder;
    builder.createPizza();
    builder.build_dough();
    builder.build_sauce();
    builder.build_ingredients();
    builder.build_price();
    auto pizza = builder.getPizza();
    EXPECT_EQ(pizza->GetDough(), "thin");
    EXPECT_EQ(pizza->GetSauce(), "tomato");
    EXPECT_EQ(pizza->GetIngredients(), "Tomatoes Mozzarella Basil ");
    EXPECT_EQ(PriceList::MARGARITA, pizza->GetPrice());
}
