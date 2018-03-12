#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "ordermanager.h"

TEST(diablo, pizzaTest) {
    CDiabloPizzaBuilder builder;
    builder.createPizza();
    builder.buildDough();
    builder.buildSauce();
    builder.buildIngredients();
    builder.buildPrice();
    auto pizza = builder.getPizza();
    EXPECT_EQ(pizza->getDough(), "thick");
    EXPECT_EQ(pizza->getSauce(), "hot");
    EXPECT_EQ(pizza->getIngredients(), "Pepperoni Frankfurter Red chilli Mozzarella ");
    EXPECT_EQ(PriceList::DIABLO, pizza->getPrice());
}

TEST(hawaiian, pizzaTest) {
    CHawaiianPizzaBuilder builder;
    builder.createPizza();
    builder.buildDough();
    builder.buildSauce();
    builder.buildIngredients();
    builder.buildPrice();
    auto pizza = builder.getPizza();
    EXPECT_EQ(pizza->getDough(), "basic");
    EXPECT_EQ(pizza->getSauce(), "sweet");
    EXPECT_EQ(pizza->getIngredients(), "Pineapple Bacon Ham Mozzarella ");
    EXPECT_EQ(PriceList::HAWAIIAN, pizza->getPrice());
}

TEST(margarita, pizzaTest) {
    CMargaritaPizzaBuilder builder;
    builder.createPizza();
    builder.buildDough();
    builder.buildSauce();
    builder.buildIngredients();
    builder.buildPrice();
    auto pizza = builder.getPizza();
    EXPECT_EQ(pizza->getDough(), "thin");
    EXPECT_EQ(pizza->getSauce(), "tomato");
    EXPECT_EQ(pizza->getIngredients(), "Tomatoes Mozzarella Basil ");
    EXPECT_EQ(PriceList::MARGARITA, pizza->getPrice());
}
