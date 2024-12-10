#include <iostream>
#include <vector>

int main()
{
    std::vector<int> numbers_to_use;
    int total_even = 0;
    int product_odd = 1;

    numbers_to_use.push_back(2);
    numbers_to_use.push_back(4);
    numbers_to_use.push_back(3);
    numbers_to_use.push_back(6);
    numbers_to_use.push_back(1);
    numbers_to_use.push_back(9);

    for (int i = 0; i < numbers_to_use.size(); i++)
    {
        if (numbers_to_use[i] % 2 == 0)
        {
            total_even = total_even + numbers_to_use[i];
        }
        else
        {
            product_odd = product_odd * numbers_to_use[i];
        }
    }

    std::cout << "Sum of even numbers: " << total_even << "\n";
    std::cout << "Product of odd numbers: " << product_odd << "\n";
}