#include "pizzabuilder.h"

class CDiabloPizzaBuilder: public IPizzaBuilder {
public:
	CDiabloPizzaBuilder() : IPizzaBuilder(PriceList::DIABLO) {}
	~CDiabloPizzaBuilder() final = default;
	void buildDough() final;
	void buildSauce() final;
	void buildIngredients() final;
};

class CHawaiianPizzaBuilder: public IPizzaBuilder {
public:
    CHawaiianPizzaBuilder() : IPizzaBuilder(PriceList::HAWAIIAN) {}
    ~CHawaiianPizzaBuilder() final = default;
    void buildDough() final;
    void buildSauce() final;
    void buildIngredients() final;
};

class CMargaritaPizzaBuilder: public IPizzaBuilder {
public:
    CMargaritaPizzaBuilder() : IPizzaBuilder(PriceList::MARGARITA) {}
    ~CMargaritaPizzaBuilder() final = default;
    void buildDough() final;
    void buildSauce() final;
    void buildIngredients() final;
};

class CNewPizzaBuilder: public IPizzaBuilder {
public:
    CNewPizzaBuilder() : IPizzaBuilder(PriceList::CUSTOM) {}
    ~CNewPizzaBuilder() final = default;
    void buildDough() final;
    void buildSauce() final;
    void buildIngredients() final;
};