#include <vector>
#include <iostream>
#include "pizza.h"

class IPizzaBuilder {
protected:
	std::shared_ptr<CPizza> m_pizza;
    const PriceList pizza_price;
public:
    explicit IPizzaBuilder(PriceList curPrice) : pizza_price(curPrice) {}
	virtual ~IPizzaBuilder() = default;
	std::shared_ptr<CPizza> getPizza();
	void createPizza();
    int getPizzaPrice();
	virtual void build_dough() = 0;
	virtual void build_sauce() = 0;
	virtual void build_ingredients() = 0;
    void build_price();
};
