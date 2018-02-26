#include "pizzabuilder.h"

std::shared_ptr<CPizza> IPizzaBuilder::getPizza() {
	return m_pizza;
}

int IPizzaBuilder::getPizzaPrice() {
    return pizza_price;
}

void IPizzaBuilder::createPizza() {
	m_pizza.reset(new CPizza());
}

void IPizzaBuilder::build_price() {
    m_pizza->SetPrice(pizza_price);
}