#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <random>

/*
    Description: The program scrambles a word, and the player tries to guess the original word.
    Skills: Strings, randomization, input/output.
    Bonus: Add a timer to track how quickly the player solves it.
*/

int main()
{
    std::vector<std::string> words = {"programming", "algorithm", "developer", "software", "computer"};
    std::vector<char> scrambledWord;
    srand(time(NULL)); // makes sure number is different each time

    int randomIndex = rand() % words.size();
    std::string word = words[randomIndex];

    for (int i = 0; i < word.size(); i++)
    {
        scrambledWord.push_back(word[i]);
    }

    // Shuffling the characters
    std::random_device rd;                // Creates a random device to obtain the seed for the random number generator
    std::default_random_engine rng(rd()); // Initializes the random number generator with the seed from the random device
    for (size_t i = 0; i < scrambledWord.size(); i++)
    {
        // Create a uniform distribution for indices in the range [i, letters.size() - 1]
        // This ensures we only shuffle the remaining portion of the vector
        std::uniform_int_distribution<size_t> dist(i, scrambledWord.size() - 1);
        // Swap the current element at index 'i' with a randomly chosen element in the range [i, letters.size() - 1]
        std::swap(scrambledWord[i], scrambledWord[dist(rng)]);
    }

    for (char c : scrambledWord)
    {
        std::cout << c;
    }
}