#include <vector>
#include <iostream>
#include "pizza.h"

class IPizzaBuilder {
protected:
	std::shared_ptr<CPizza> m_pizza;

public:
	virtual ~IPizzaBuilder() {}
	std::shared_ptr<CPizza> getPizza();
	void createPizza();
	virtual void build_dough() = 0;
	virtual void build_sauce() = 0;
	virtual void build_ingredients() = 0;
	virtual void build_price() = 0;
};
