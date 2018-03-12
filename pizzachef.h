#include "main_builder.h"

class CPizzaChef {
private:
    IPizzaBuilder* _pizzaBuilder;
public:
    CPizzaChef() : _pizzaBuilder(nullptr) {}
    ~CPizzaChef();
    void setPizzaBuilder(IPizzaBuilder *builder);
    std::shared_ptr<CPizza> getPizza();
    void buildPizza();
    int getNextPizzaPrice();
    void becomeFree();
};