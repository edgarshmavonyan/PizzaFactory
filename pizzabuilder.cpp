#include "pizzabuilder.h"

std::shared_ptr<CPizza> IPizzaBuilder::getPizza() {
	return m_pizza;
}

void IPizzaBuilder::createPizza() {
	m_pizza.reset(new CPizza());
}