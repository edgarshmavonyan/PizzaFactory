#include "main_builder.h"

void CDiabloPizzaBuilder::build_dough() {
    m_pizza->SetDough("thick");
}

void CDiabloPizzaBuilder::build_sauce() {
    m_pizza->SetSauce("hot");
}

void CDiabloPizzaBuilder::build_ingredients() {
    m_pizza->AddIngredients("Pepperoni");
    m_pizza->AddIngredients("Frankfurter");
    m_pizza->AddIngredients("Red chilli");
    m_pizza->AddIngredients("Mozzarella");
}

void CDiabloPizzaBuilder::build_price() {
    m_pizza->SetPrice(150);
}

void CHawaiianPizzaBuilder::build_dough() {
    m_pizza->SetDough("basic");
}

void CHawaiianPizzaBuilder::build_sauce() {
    m_pizza->SetSauce("sweet");
}

void CHawaiianPizzaBuilder::build_ingredients() {
    m_pizza->AddIngredients("Pineapple");
    m_pizza->AddIngredients("Bacon");
    m_pizza->AddIngredients("Ham");
    m_pizza->AddIngredients("Mozzarella");
}

void CHawaiianPizzaBuilder::build_price() {
    m_pizza->SetPrice(120);
}

void CMargaritaPizzaBuilder::build_dough() {
    m_pizza->SetDough("thin");
}

void CMargaritaPizzaBuilder::build_sauce() {
    m_pizza->SetSauce("tomato");
}

void CMargaritaPizzaBuilder::build_ingredients() {
    m_pizza->AddIngredients("Tomatoes");
    m_pizza->AddIngredients("Mozzarella");
    m_pizza->AddIngredients("Basil");
}

void CMargaritaPizzaBuilder::build_price() {
    m_pizza->SetPrice(100);
}

void CNewPizzaBuilder::build_dough() {
    std::cout << "Choose a dough for your pizza" << std::endl;
    std::string inputDough;
    std::cin >> inputDough;
    m_pizza->SetDough(inputDough);
}

void CNewPizzaBuilder::build_sauce() {
    std::cout << "Choose a sauce for your pizza" << std::endl;
    std::string inputSauce;
    std::cin >> inputSauce;
    m_pizza->SetSauce(inputSauce);
}

void CNewPizzaBuilder::build_ingredients() {
    std::cout << "How much ingredients do you want?" << std::endl;
    int number_of_ingredients;
    std::cin >> number_of_ingredients;
    std::cout << "Choose the ones you want" << std::endl;
    for (int i = 0; i < number_of_ingredients; i++) {
        std::string currentIngredient;
        std::cin >> currentIngredient;
        m_pizza->AddIngredients(currentIngredient);
    }
}

void CNewPizzaBuilder::build_price() {
    std::cout << "The price of your pizza will be... 300" << std::endl;
    m_pizza->SetPrice(300);
}