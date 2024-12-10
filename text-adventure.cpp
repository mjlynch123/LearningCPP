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

void pause()
{
    std::cout << "Press enter to continue...";
    std::cin.get();
    clearConsole();
}

int main()
{
    std::cout << "Murder Mystery: The Clock Struck Midnight";
    pause();

    std::cout << "The Story\n";
    std::cout << "\n";
    std::cout << "The wealthy and eccentric art collector, Vincent Armand, was found dead in his study at Armand Manor.\n";
    std::cout << "The police determined he was poisoned just before midnight at his dinner party. The guests included his estranged brother,\n";
    std::cout << "the devoted assistant, a longtime rival, and his fiancée. Each had a motive, but the poison was subtle and left clues that only a sharp mind could piece together.\n";
    std::cout << "\n";
    std::cout << "The Suspects\n";
    std::cout << "\n";
    std::cout << "1: Marcus Armand (Brother): Had been feuding with Vincent over their late father’s estate. He had recently lost a court case that left him with nothing.\n";
    std::cout << "2: Evelyn Carter (Assistant): Worked for Vincent for years, but their relationship had soured after Vincent accused her of stealing a valuable painting.\n";
    std::cout << "3: Robert Lang (Rival): A rival art collector who had been embarrassed by Vincent in a recent auction. Robert was furious over losing a prized artifact to him.\n";
    std::cout << "4: Clara DeLune (Fiancée): Engaged to Vincent but recently discovered he had been hiding financial troubles and a prenuptial agreement.\n";
}