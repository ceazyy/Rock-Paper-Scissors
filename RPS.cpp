#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

enum Choice { ROCK, PAPER, SCISSORS };


Choice intToChoice(int num) {
    switch (num) {
        case 0: return ROCK;
        case 1: return PAPER;
        case 2: return SCISSORS;
        default: return ROCK;
    }
}


string choiceToString(Choice choice) {
    switch (choice) {
        case ROCK: return "Rock";
        case PAPER: return "Paper";
        case SCISSORS: return "Scissors";
        default: return "Unknown";
    }
}


string determineWinner(Choice userChoice, Choice computerChoice) {
    if (userChoice == computerChoice) return "It's a tie!";
    if ((userChoice == ROCK && computerChoice == SCISSORS) ||
        (userChoice == PAPER && computerChoice == ROCK) ||
        (userChoice == SCISSORS && computerChoice == PAPER)) {
        return "You win!";
    } else {
        return "Computer wins!";
    }
}

int main() {

    srand(static_cast<unsigned int>(time(0)));

    int userInput;
    cout << "Welcome to Rock, Paper, Scissors!" << endl;
    cout << "Enter your choice (0 = Rock, 1 = Paper, 2 = Scissors): ";
    cin >> userInput;


    if (userInput < 0 || userInput > 2) {
        cout << "Invalid input. Please enter 0, 1, or 2." << endl;
        return 1;
    }

    Choice userChoice = intToChoice(userInput);
    Choice computerChoice = intToChoice(rand() % 3);

    cout << "You chose: " << choiceToString(userChoice) << endl;
    cout << "Computer chose: " << choiceToString(computerChoice) << endl;
    cout << determineWinner(userChoice, computerChoice) << endl;

    return 0;
}
