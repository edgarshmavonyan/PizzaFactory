#include "pizzachef.h"

CPizzaChef::~CPizzaChef() {
    delete pizzaBuilder;
}

void CPizzaChef::SetPizzaBuilder(IPizzaBuilder *builder) {
    pizzaBuilder = builder;
}

std::shared_ptr<CPizza> CPizzaChef::GetPizza() {
    return pizzaBuilder->getPizza();
}

void CPizzaChef::BuildPizza() {
    pizzaBuilder->createPizza();
    pizzaBuilder->build_dough();
    pizzaBuilder->build_sauce();
    pizzaBuilder->build_ingredients();
    pizzaBuilder->build_price();
    // РАБОТАЕТ ПЕЧЬ
}

void CPizzaChef::becomeFree() {
    delete pizzaBuilder;
    pizzaBuilder = nullptr;
}