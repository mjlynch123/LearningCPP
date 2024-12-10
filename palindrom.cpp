#include <iostream>
#include <string>

// Define is_palindrome() here:
bool is_palindrome(std::string text)
{
    int start = 0;
    int end = text.length() - 1;
    while (start < end)
    {
        if (text[start] != text[end])
        {
            return false; // if characters do not match, its not a palindrome
        }
        start++;
        end--;
    }
    return true;
}

int main()
{

    std::cout << is_palindrome("madam") << "\n";
    std::cout << is_palindrome("ada") << "\n";
    std::cout << is_palindrome("lovelace") << "\n";
    return 0;
}