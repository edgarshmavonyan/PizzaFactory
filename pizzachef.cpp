#include "pizzachef.h"

CPizzaChef::~CPizzaChef() {
    delete _pizzaBuilder;
}

void CPizzaChef::setPizzaBuilder(IPizzaBuilder *builder) {
    _pizzaBuilder = builder;
}

std::shared_ptr<CPizza> CPizzaChef::getPizza() {
    return _pizzaBuilder->getPizza();
}

void CPizzaChef::buildPizza() {
    _pizzaBuilder->createPizza();
    _pizzaBuilder->buildDough();
    _pizzaBuilder->buildSauce();
    _pizzaBuilder->buildIngredients();
    _pizzaBuilder->buildPrice();
    // РАБОТАЕТ ПЕЧЬ
}

int CPizzaChef::getNextPizzaPrice() {
    return _pizzaBuilder->getPizzaPrice();
}

void CPizzaChef::becomeFree() {
    delete _pizzaBuilder;
    _pizzaBuilder = nullptr;
}