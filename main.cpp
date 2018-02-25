#include "ordermanager.h"

int main() {
    CPizzaChef Michael;
    Waiter John;
    John.getOrder();
    auto myOrder = John.manageOrder(&Michael);
    return EXIT_SUCCESS;
}