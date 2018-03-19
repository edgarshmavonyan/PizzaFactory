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

TEST(factory, moscowTest) {
    CMoscowFactory moscowFactory;
    auto greekPizza = moscowFactory.create_greek();
    auto caesarPizza = moscowFactory.create_caesar();
    auto vinegretPizza = moscowFactory.create_vinegret();

    EXPECT_EQ(greekPizza->getIngredients(), "tomatoes, cucumbers, onions, feta cheese");
    EXPECT_EQ(greekPizza->getStyle(), "Moscow");
    EXPECT_EQ(caesarPizza->getIngredients(), "romaine lettuce, croutons, parmesan cheese, chicken");
    EXPECT_EQ(caesarPizza->getStyle(), "Moscow");
    EXPECT_EQ(vinegretPizza->getIngredients(), "beet, potato, carrot, sauerkraut");
    EXPECT_EQ(vinegretPizza->getStyle(), "Moscow");
}

TEST(factor, romeTest) {
    CRomeFactory moscowFactory;
    auto greekPizza = moscowFactory.create_greek();
    auto caesarPizza = moscowFactory.create_caesar();
    auto vinegretPizza = moscowFactory.create_vinegret();
    
    EXPECT_EQ(greekPizza->getIngredients(), "tomatoes, cucumbers, onions, feta cheese");
    EXPECT_EQ(greekPizza->getStyle(), "Rome");
    EXPECT_EQ(caesarPizza->getIngredients(), "romaine lettuce, croutons, parmesan cheese, chicken");
    EXPECT_EQ(caesarPizza->getStyle(), "Rome");
    EXPECT_EQ(vinegretPizza->getIngredients(), "beet, potato, carrot, sauerkraut");
    EXPECT_EQ(vinegretPizza->getStyle(), "Rome");
}
