#include "main_builder.h"
#include "factory.h"

class CPizzaChef {
private:

    std::shared_ptr<IPizzaBuilder> _pizzaBuilder;
    std::shared_ptr<IFactory> _saladFactory;
public:
    CPizzaChef() : _pizzaBuilder(nullptr), _saladFactory(nullptr) {}

    void setPizzaBuilder(std::shared_ptr<IPizzaBuilder> builder);
    void setSaladFactory(std::shared_ptr<IFactory> saladFactory);
    std::shared_ptr<CPizza> getPizza();

    void buildPizza();
    int getNextPizzaPrice();

    std::shared_ptr<ISalad> get_greek();
    std::shared_ptr<ISalad> get_caesar();
    std::shared_ptr<ISalad> get_vinegret();
};