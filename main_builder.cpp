#include "main_builder.h"

void CDiabloPizzaBuilder::buildDough() {
    _mPizza->_setDough("thick");
}

void CDiabloPizzaBuilder::buildSauce() {
    _mPizza->_setSauce("hot");
}

void CDiabloPizzaBuilder::buildIngredients() {
    _mPizza->_addIngredients("Pepperoni");
    _mPizza->_addIngredients("Frankfurter");
    _mPizza->_addIngredients("Red chilli");
    _mPizza->_addIngredients("Mozzarella");
}

void CHawaiianPizzaBuilder::buildDough() {
    _mPizza->_setDough("basic");
}

void CHawaiianPizzaBuilder::buildSauce() {
    _mPizza->_setSauce("sweet");
}

void CHawaiianPizzaBuilder::buildIngredients() {
    _mPizza->_addIngredients("Pineapple");
    _mPizza->_addIngredients("Bacon");
    _mPizza->_addIngredients("Ham");
    _mPizza->_addIngredients("Mozzarella");
}

void CMargaritaPizzaBuilder::buildDough() {
    _mPizza->_setDough("thin");
}

void CMargaritaPizzaBuilder::buildSauce() {
    _mPizza->_setSauce("tomato");
}

void CMargaritaPizzaBuilder::buildIngredients() {
    _mPizza->_addIngredients("Tomatoes");
    _mPizza->_addIngredients("Mozzarella");
    _mPizza->_addIngredients("Basil");
}

void CNewPizzaBuilder::buildDough() {
    std::cout << "Choose a _dough for your pizza" << std::endl;
    std::string inputDough;
    std::cin >> inputDough;
    _mPizza->_setDough(inputDough);
}

void CNewPizzaBuilder::buildSauce() {
    std::cout << "Choose a sauce for your pizza" << std::endl;
    std::string inputSauce;
    std::cin >> inputSauce;
    _mPizza->_setSauce(inputSauce);
}

void CNewPizzaBuilder::buildIngredients() {
    std::cout << "How much ingredients do you want?" << std::endl;
    int number_of_ingredients;
    std::cin >> number_of_ingredients;
    std::cout << "Choose the ones you want" << std::endl;
    for (int i = 0; i < number_of_ingredients; i++) {
        std::string currentIngredient;
        std::cin >> currentIngredient;
        _mPizza->_addIngredients(currentIngredient);
    }
}