#include "pizzabuilder.h"

class CDiabloPizzaBuilder: public IPizzaBuilder {
public:
	CDiabloPizzaBuilder() : IPizzaBuilder(PriceList::DIABLO) {}
	~CDiabloPizzaBuilder() final = default;
	void build_dough() final;
	void build_sauce() final;
	void build_ingredients() final;
};

class CHawaiianPizzaBuilder: public IPizzaBuilder {
public:
    CHawaiianPizzaBuilder() : IPizzaBuilder(PriceList::HAWAIIAN) {}
    ~CHawaiianPizzaBuilder() final = default;
    void build_dough() final;
    void build_sauce() final;
    void build_ingredients() final;
};

class CMargaritaPizzaBuilder: public IPizzaBuilder {
public:
    CMargaritaPizzaBuilder() : IPizzaBuilder(PriceList::MARGARITA) {}
    ~CMargaritaPizzaBuilder() final = default;
    void build_dough() final;
    void build_sauce() final;
    void build_ingredients() final;
};

class CNewPizzaBuilder: public IPizzaBuilder {
public:
    CNewPizzaBuilder() : IPizzaBuilder(PriceList::CUSTOM) {}
    ~CNewPizzaBuilder() final = default;
    void build_dough() final;
    void build_sauce() final;
    void build_ingredients() final;
};