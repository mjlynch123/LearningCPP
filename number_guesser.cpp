#include <iostream>
#include <cmath>

int main()
{
    srand(time(NULL));
    int max_number;

    std::cout << "Enter the maximum number: ";
    std::cin >> max_number;

    int number = rand() % max_number + 1;

    std::cout << "I have chosen a number between 1 and " << max_number << ".\n";
    std::cout << number << "\n";
}