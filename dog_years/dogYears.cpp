#include <iostream>

int main()
{
    int dog_age;
    int human_years;
    int early_years = 21;

    std::cout << "Enter your dog's age: ";
    std::cin >> dog_age;

    human_years = early_years + (dog_age - 2) * 4;
    std::cout << "Dogs age: " << human_years << " years old!\n";
}