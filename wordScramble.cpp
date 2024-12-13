#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <random>

/*
    Description: The program scrambles a word, and the player tries to guess the original word.
*/

// Scrambling the word
void scramble(std::vector<char> chosenWord)
{
    // Shuffling the characters
    std::random_device rd;                // Creates a random device to obtain the seed for the random number generator
    std::default_random_engine rng(rd()); // Initializes the random number generator with the seed from the random device
    for (size_t i = 0; i < chosenWord.size(); i++)
    {
        // Create a uniform distribution for indices in the range [i, letters.size() - 1]
        // This ensures we only shuffle the remaining portion of the vector
        std::uniform_int_distribution<size_t> dist(i, chosenWord.size() - 1);
        // Swap the current element at index 'i' with a randomly chosen element in the range [i, letters.size() - 1]
        std::swap(chosenWord[i], chosenWord[dist(rng)]);
    }

    for (char c : chosenWord)
    {
        std::cout << c;
    }

    std::cout << "\n";
}

// Getting a random word from a list of words
std::vector<char> getWord()
{
    std::vector<std::string> words = {"programming", "algorithm", "developer", "software", "computer"};
    std::vector<char> splicedWord;
    srand(time(NULL)); // makes sure number is different each time

    int randomIndex = rand() % words.size();
    std::string word = words[randomIndex];

    for (int i = 0; i < word.size(); i++)
    {
        splicedWord.push_back(word[i]);
    }

    scramble(splicedWord);
    return splicedWord;
}

// Checking if the answer ic correct and returning a boolean value
bool checkAnswer(std::string answer, std::vector<char> chosenWord)
{
    std::string word(chosenWord.begin(), chosenWord.end());
    if (answer == word)
    {
        std::cout << "Congratulations! You unscrambled the word!\n";
        return true;
    }
    else if (answer == "")
    {
        return 0; // return nothing if the answer is empty
    }
    else
    {
        std::cout << "Sorry, that's not the correct word.\n";
        return false;
    }
}

int main()
{
    std::cout << "Welcome to Word Scramble!\n";
    std::cout << "Unscramble the word to win!\n";
    std::string userAnswer;

    std::vector<char> chosenWord = getWord();
    while (!checkAnswer(userAnswer, chosenWord))
    {
        std::cout << "Enter your guess: ";
        std::cin >> userAnswer;
    }

    return 0;
}