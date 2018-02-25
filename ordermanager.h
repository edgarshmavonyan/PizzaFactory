#include "pizzachef.h"

class Waiter {
private:
    std::vector<std::pair<std::string, int> > curOrder;
public:
    Waiter() = default;
    void getOrder();
    std::vector<std::shared_ptr<CPizza> > manageOrder(CPizzaChef* curChef);
};