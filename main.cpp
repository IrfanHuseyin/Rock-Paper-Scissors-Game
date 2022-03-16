// Rock, Paper, Scissors Game. 
// Irfan Huseyin

#include <iostream> 
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){

    int playerScore = 0;
    int cpuScore = 0;
    
    int x = 1;

    while(x <= 3){
        cout << "Rounds " << x << " Of 3 " << endl;
        x++;

    srand(time(NULL));

    int Player = 0, cpu = 0;
        cout << "ROCK,PAPER,SCISSORS GAME " << endl;
        cout << "1) ROCK " << endl;
        cout << "2) PAPER " << endl;
        cout << "3) SCISSORS " << endl;
        cin >> Player;
    
    // User inputs
    
    if(Player == 1){
        cout << "You Chose ROCK " << endl;
    }
    else if(Player == 2){
        cout << "You Chose PAPER " << endl;
    }
    else{
        cout << "You Chose SCISSORS " << endl;
    }
    
    // CPU Creates Moves!

    cpu = rand()%3+1;

    if(cpu == 1){
        cout << "CPU Chose ROCK " << endl;
    }
    else if(cpu == 2){
        cout << "CPU Chose PAPER " << endl;
    }
    else{
        cout << "CPU Chose SCISSORS " << endl;
    }

    //MATCH

    if(Player == cpu){
        cout << "It's a Draw! " << endl;
        playerScore++, cpuScore++;
    }
    
    //user chooses rock
    
    else if(Player == 1){
    
    if(cpu == 2){
        cout << "You Lose! " << endl;
        cpuScore++;
    }
    if(cpu == 3){
        cout << "You Win! " << endl;
        playerScore++;
    }
    }
    
    //user chooses paper

    else if(Player == 2){

    if(cpu == 1){
        cout << "You Win! " << endl;
        playerScore++;
    }
    if(cpu == 3){
        cout << "You Lose! " << endl;
        cpuScore++;
    }
    }
    
    //user chooses scissors
    
    else if(Player == 3){

    if(cpu == 1){
        cout << "You Lose! " << endl;
        cpuScore++;
    }
    if(cpu == 2){
        cout << "You Win! " << endl;
        playerScore++;
    }
    }
   
    }
    
    //End Results

    cout << "Player Score = " << playerScore << endl;
    cout << "CPU Score = " << cpuScore << endl;
    cout << "Thank You For Playing " << endl;
    
    }
