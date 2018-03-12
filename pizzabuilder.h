#include <vector>
#include <iostream>
#include "pizza.h"

class IPizzaBuilder {
protected:
	std::shared_ptr<CPizza> _mPizza;
    const PriceList _pizzaPrice;
public:
    explicit IPizzaBuilder(PriceList curPrice) : _pizzaPrice(curPrice) {}
	virtual ~IPizzaBuilder() = default;
	std::shared_ptr<CPizza> getPizza();
	void createPizza();
    int getPizzaPrice();
	virtual void buildDough() = 0;
	virtual void buildSauce() = 0;
	virtual void buildIngredients() = 0;
    void buildPrice();
};
