#include "ordermanager.h"

void Waiter::getOrder() {
    std::cout << "How many types of pizza do you want?" << std::endl;
    int pizzaNumber;
    std::cin >> pizzaNumber;
    for (int i = 0; i < pizzaNumber; i++) {
        std::cout << "What type of pizza do you want now?" << std::endl;
        std::string pizzaType;
        std::cin >> pizzaType;
        int curNumber;
        std::cout << "How much pizzas of this type would you like?" << std::endl;
        std::cin >> curNumber;
        if (curNumber > 0)
            _curOrder.emplace_back(std::make_pair(pizzaType, curNumber));
        else
            std::cout << "Stop joking, please." << std::endl;
    }
}

std::vector<std::shared_ptr<CPizza> > Waiter::manageOrder(CPizzaChef* curChef) {
    std::vector<std::shared_ptr<CPizza> > order;
    int cost = 0;
    for (auto& curPizza: _curOrder) {
        bool inMenu = false;
        if (curPizza.first == "Hawaiian") {
            curChef->setPizzaBuilder(new CHawaiianPizzaBuilder);
            inMenu = true;
        }
        if (curPizza.first == "Margarita") {
            curChef->setPizzaBuilder(new CMargaritaPizzaBuilder);
            inMenu = true;
        }
        if (curPizza.first == "Diablo") {
            curChef->setPizzaBuilder(new CDiabloPizzaBuilder);
            inMenu = true;
        }
        if (curPizza.first == "Custom") {
            curChef->setPizzaBuilder(new CNewPizzaBuilder);
            inMenu = true;
        }
        if (!inMenu) {
            std::cout << "Sorry, but we have no " << curPizza.first << " pizzas currently" << std::endl;
            continue;
        }
        for (int j = 0; j < curPizza.second; j++) {
            curChef->buildPizza();
            order.push_back(curChef->getPizza());
        }
        cost += curPizza.second * curChef->getNextPizzaPrice();
        curChef->becomeFree();
        order.back()->printPizza();
    }
    std::cout << "The cost of your order is... " << cost << std::endl;
    std::cout << "Here is the bill" << std::endl;
    _curOrder.clear();
    return order;
}