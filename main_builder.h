#include "pizzabuilder.h"

class CDiabloPizzaBuilder: public IPizzaBuilder {
public:
	CDiabloPizzaBuilder() : IPizzaBuilder() {}
	~CDiabloPizzaBuilder() final = default;
	void build_dough() final;
	void build_sauce() final;
	void build_ingredients() final;
	void build_price() final;
};

class CHawaiianPizzaBuilder: public IPizzaBuilder {
public:
    CHawaiianPizzaBuilder() : IPizzaBuilder() {}
    ~CHawaiianPizzaBuilder() final = default;
    void build_dough() final;
    void build_sauce() final;
    void build_ingredients() final;
    void build_price() final;
};

class CMargaritaPizzaBuilder: public IPizzaBuilder {
public:
    CMargaritaPizzaBuilder() : IPizzaBuilder() {}
    ~CMargaritaPizzaBuilder() final = default;
    void build_dough() final;
    void build_sauce() final;
    void build_ingredients() final;
    void build_price() final;
};

class CNewPizzaBuilder: public IPizzaBuilder {
public:
    CNewPizzaBuilder() : IPizzaBuilder() {}
    ~CNewPizzaBuilder() final = default;
    void build_dough() final;
    void build_sauce() final;
    void build_ingredients() final;
    void build_price() final;
};