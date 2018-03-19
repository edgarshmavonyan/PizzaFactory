#include "pizzachef.h"

void CPizzaChef::setPizzaBuilder(std::shared_ptr<IPizzaBuilder> builder) {
    _pizzaBuilder = builder;
}

void CPizzaChef::setSaladFactory(std::shared_ptr<IFactory> saladFactory) {
    _saladFactory = saladFactory;
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

std::shared_ptr<ISalad> CPizzaChef::get_greek() {
    return _saladFactory->create_greek();
}

std::shared_ptr<ISalad> CPizzaChef::get_caesar() {
    return _saladFactory->create_caesar();
}

std::shared_ptr<ISalad> CPizzaChef::get_vinegret() {
    return _saladFactory->create_vinegret();
}