#include "main_builder.h"

void CDiabloPizzaBuilder::buildDough() {
    _mPizza->setDough("thick");
}

void CDiabloPizzaBuilder::buildSauce() {
    _mPizza->setSauce("hot");
}

void CDiabloPizzaBuilder::buildIngredients() {
    _mPizza->addIngredients("Pepperoni");
    _mPizza->addIngredients("Frankfurter");
    _mPizza->addIngredients("Red chilli");
    _mPizza->addIngredients("Mozzarella");
}

void CHawaiianPizzaBuilder::buildDough() {
    _mPizza->setDough("basic");
}

void CHawaiianPizzaBuilder::buildSauce() {
    _mPizza->setSauce("sweet");
}

void CHawaiianPizzaBuilder::buildIngredients() {
    _mPizza->addIngredients("Pineapple");
    _mPizza->addIngredients("Bacon");
    _mPizza->addIngredients("Ham");
    _mPizza->addIngredients("Mozzarella");
}

void CMargaritaPizzaBuilder::buildDough() {
    _mPizza->setDough("thin");
}

void CMargaritaPizzaBuilder::buildSauce() {
    _mPizza->setSauce("tomato");
}

void CMargaritaPizzaBuilder::buildIngredients() {
    _mPizza->addIngredients("Tomatoes");
    _mPizza->addIngredients("Mozzarella");
    _mPizza->addIngredients("Basil");
}

void CNewPizzaBuilder::buildDough() {
    std::cout << "Choose a _dough for your pizza" << std::endl;
    std::string inputDough;
    std::cin >> inputDough;
    _mPizza->setDough(inputDough);
}

void CNewPizzaBuilder::buildSauce() {
    std::cout << "Choose a sauce for your pizza" << std::endl;
    std::string inputSauce;
    std::cin >> inputSauce;
    _mPizza->setSauce(inputSauce);
}

void CNewPizzaBuilder::buildIngredients() {
    std::cout << "How much ingredients do you want?" << std::endl;
    int number_of_ingredients;
    std::cin >> number_of_ingredients;
    std::cout << "Choose the ones you want" << std::endl;
    for (int i = 0; i < number_of_ingredients; i++) {
        std::string currentIngredient;
        std::cin >> currentIngredient;
        _mPizza->addIngredients(currentIngredient);
    }
}