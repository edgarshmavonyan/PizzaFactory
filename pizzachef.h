#include "main_builder.h"

class CPizzaChef {
private:
    IPizzaBuilder* pizzaBuilder;
public:
    CPizzaChef() : pizzaBuilder(nullptr) {}
    ~CPizzaChef();
    void SetPizzaBuilder(IPizzaBuilder* builder);
    std::shared_ptr<CPizza> GetPizza();
    void buildPizza();
    int getNextPizzaPrice();
    void becomeFree();
};