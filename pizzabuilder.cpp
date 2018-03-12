#include "pizzabuilder.h"

std::shared_ptr<CPizza> IPizzaBuilder::getPizza() {
	return _mPizza;
}

int IPizzaBuilder::getPizzaPrice() {
    return _pizzaPrice;
}

void IPizzaBuilder::createPizza() {
	_mPizza.reset(new CPizza());
}

void IPizzaBuilder::buildPrice() {
    _mPizza->_setPrice(_pizzaPrice);
}