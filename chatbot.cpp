#include <iostream>
#include <string>
#include <unordered_map>
#include <regex>

int main()
{
    std::cout << "Chatbot: Hello!, I'm you friendly terminal chatbot, type 'bye' to exit at anytime.\n";

    std::unordered_map<std::string, std::string> responses = {
        {"hello", "Hi there!"},
        {"how are you", "I'm just a program, but I'm doing fine! How about you?"},
        {"what is your name", "I'm Chatbot, your virtual assistant."},
        {"bye", "Goodbye! Have a great day!"},
    };

    std::string user_input;
    while (true)
    {
        std::cout << "You: ";
        std::getline(std::cin, user_input);

        // conver user input to lower for easier matching
        for (char &c : user_input)
        {
            c = std::tolower(c);
        }

        // check for predefined responses
        if (responses.find(user_input) != responses.end())
        {
            std::cout << "Chatbot: " << responses[user_input] << "\n";
        }
        else
        {
            std::cout << "Chatbot: I'm sorry, I don't understand that.\n";
        }
    }
    return 0;
}