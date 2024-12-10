#include <iostream>
#include <cstdlib>

void clearConsole()
{
#ifdef _WIN32
    system("cls"); // Windows
#else
    system("clear"); // Linux/macOS
#endif
}

void displayStory()
{
    std::cout << "Murder Mystery: \"The Clock Struck Midnight\"\n";
    std::cout << "---------------------------------------------\n";
    std::cout << "The wealthy and eccentric art collector, Vincent Armand, was found dead in his study at Armand Manor. The police determined he was poisoned just before midnight at his dinner party. The guests included:\n\n";
    std::cout << "1. Marcus Armand (Brother): Feuding over the estate.\n";
    std::cout << "2. Evelyn Carter (Assistant): Accused of stealing a valuable painting.\n";
    std::cout << "3. Robert Lang (Rival): Lost a prized artifact to Vincent.\n";
    std::cout << "4. Clara DeLune (Fiancée): Discovered Vincent's financial troubles.\n\n";
    std::cout << "The Evening's Events\n\n";
    std::cout << "8:00 PM: The dinner began, and the guests dined on a sumptuous meal. Clara seemed distant, while Marcus and Vincent exchanged icy words\n";
    std::cout << "9:30 PM: Vincent took everyone to his study to unveil a rare painting he had recently acquired. Evelyn was visibly uncomfortable as Vincent bragged about her role in securing it.\n";
    std::cout << "10:45 PM: Vincent complained of feeling unwell and left the group, saying he needed some air./n";
    std::cout << "11:30 PM: Clara went to check on Vincent but found him slumped over his desk. The police arrived shortly after, confirming he had been poisoned.\n";
    std::cout << "Clues:\n\n";
    std::cout << "- The wine glass on Vincent's desk had poison residue.\n";
    std::cout << "- The safe key was missing, though nothing appeared stolen.\n";
    std::cout << "- The clock in the study stopped at 11:15 PM.\n";
    std::cout << "- A half-burned letter in the fireplace read, \"I can’t let you ruin me any longer. Tonight, this ends.\"\n\n";
}

void displayQuestion(const std::string &question, const std::string options[], int correctAnswer, int &score)
{
    int userAnswer;

    std::cout << question << "\n";
    for (int i = 0; i < 4; i++)
    {
        std::cout << char('A' + i) << ") " << options[i] << "\n";
    }
    std::cout << "Your answer: ";
    std::cin >> userAnswer;

    // Validate and check answer
    if (userAnswer >= 1 && userAnswer <= 4)
    {
        if (userAnswer == correctAnswer)
        {
            std::cout << "Correct!\n\n";
            score++;
        }
        else
        {
            std::cout << "Incorrect.\n\n";
        }
    }
    else
    {
        std::cout << "Invalid input. Please enter a number between 1 and 4.\n\n";
    }
}

void pause()
{
    std::cout << "\n";
    std::cout << "\n";
    std::cout << "Press enter to continue...";
    std::cin.get();
}

int main()
{
    char answer1;
    char answer2;
    char answer3;
    char answer4;

    clearConsole();
    std::cout << "Murder Mystery: The Clock Struck Midnight\n";
    pause();
    clearConsole();
    displayStory();

    int score = 0;
    std::string murdererGuess;
    std::string actualMurderer = "Clara";

    // Question 1
    std::string q1 = "1. What is the significance of the wine glass, and who might have been close enough to tamper with it?";
    std::string q1_options[] = {
        "Marcus - He was arguing with Vincent earlier in the evening.",
        "Evelyn - She served the drinks during dinner.",
        "Robert - He brought a bottle of wine as a gift.",
        "Clara - She poured a second glass for Vincent in the study."};
    displayQuestion(q1, q1_options, 4, score);

    // Question 2
    std::string q2 = "2. Why was the safe key missing, and who might have had a motive to take it?";
    std::string q2_options[] = {
        "Marcus - He wanted to search for legal documents about the estate.",
        "Evelyn - She had been accused of stealing from the safe before.",
        "Robert - He knew the safe contained rare paintings.",
        "Clara - She suspected Vincent was hiding financial secrets."};
    displayQuestion(q2, q2_options, 4, score);

    // Question 3
    std::string q3 = "3. What does the clock stopping at 11:15 PM suggest about the sequence of events and who could have been alone with Vincent at that time?";
    std::string q3_options[] = {
        "Marcus - He was seen leaving the dining room around 11:00 PM.",
        "Evelyn - She excused herself to \"check on paperwork\" near the study.",
        "Robert - He was seen heading toward the garden after 11:00 PM.",
        "Clara - She went to check on Vincent, but only at 11:30 PM."};
    displayQuestion(q3, q3_options, 2, score);

    // Question 4
    std::string q4 = "4. Who might have written the half-burned letter, and how does it connect to the suspects' motives?";
    std::string q4_options[] = {
        "Marcus - He had threatened Vincent multiple times over the estate.",
        "Evelyn - She was furious about being accused of theft.",
        "Robert - He wanted revenge for losing the auction.",
        "Clara - She was angry about the prenuptial agreement."};
    displayQuestion(q4, q4_options, 1, score);

    // Final Score and Answer
    std::cout << "You scored " << score << " out of 4.\n";

    std::cout << "Do you know who the murderer was?: \n";
    std::cin >> murdererGuess;

    if (murdererGuess == actualMurderer)
    {
        std::cout << "You are one good detective! " << actualMurderer << " killed Vincent.\n";
    }
    else
    {
        std::cout << "Oops! Great guess. " << actualMurderer << " was the killer.\n";
    }
}