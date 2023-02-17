// Rock Paper Scissors Game.

#include <iostream> 
#include <cstdlib>
#include <ctime>

int main()
{
    int playerScore = 0;
    int cpuScore = 0;
    int round = 1;

    while(round <= 3)
    {
        std::cout << "\nRounds " << round << " Of 3\n";
        round++;

        srand(time(NULL));

        int Player = 0, cpu = 0;

        std::cout << "============================\n";
        std::cout << "= Rock Paper Scissors Game =\n";
        std::cout << "============================\n\n";
        std::cout << "1) Rock\n";
        std::cout << "2) Paper\n";
        std::cout << "3) Scissors\n";
        std::cin >> Player;
    
        // User Inputs
        if(Player == 1)
        {
            std::cout << "You chose Rock\n";
        }
        else if(Player == 2)
        {
            std::cout << "You chose Paper\n";
        }
        else
        {
            std::cout << "You chose Scissors\n";
        }
    
        // CPU inputs
        cpu = rand() % 3 + 1;

        if(cpu == 1)
        {
            std::cout << "CPU chose Rock\n";
        }
        else if(cpu == 2)
        {
            std::cout << "CPU chose Paper\n";
        }
        else
        {
            std::cout << "CPU chose Scissors\n";
        }

        // Match
        if(Player == cpu)
        {
            std::cout << "It's a Tie!\n";
            playerScore++, cpuScore++;
        }
    
        // User Chooses Rock
        else if(Player == 1)
        {
            if(cpu == 2)
            {
                std::cout << "You Lose!\n";
                cpuScore++;
            }
            if(cpu == 3)
            {
                std::cout << "You Win!\n";
                playerScore++;
            }   
        }
    
        // User Chooses Paper
        else if(Player == 2)
        {
            if(cpu == 1)
            {
                std::cout << "You Win!\n";
                playerScore++;
            }
            if(cpu == 3)
            {
                std::cout << "You Lose!\n";
                cpuScore++;
            }
        }
    
        // User Chooses Scissors
        else if(Player == 3)
        {
            if(cpu == 1)
            {
                std::cout << "You Lose!\n";
                cpuScore++;
            }
            if(cpu == 2)
            {
                std::cout << "You Win!\n";
                playerScore++;
            }
        }
   
    }
    
    // End Results
    std::cout << "Player Score = " << playerScore << "\n";
    std::cout << "CPU Score = " << cpuScore << "\n";
    std::cout << "Thank You For Playing " << "\n";
    
}
