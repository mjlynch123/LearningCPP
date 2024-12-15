#include <iostream>

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        // Checking if the number is divisible by 3 and 5
        if (i % 3 == 0 && i % 5 == 0)
        {
            std::cout << "FizzBuzz\n";
        }
        // Checking if number is divisble by 3
        else if (i % 3 == 0)
        {
            std::cout << "Fizz\n";
        }
        // Checking if number is divisible by 5
        else if (i % 5 == 0)
        {
            std::cout << "Buzz\n";
        }
        // If not
        else
        {
            std::cout << i << "\n";
        }
    }
}