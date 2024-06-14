# Rock Paper Scissors Game

This is a simple implementation of the Rock Paper Scissors game in C++ where a user can play against the computer. The computer's choice is randomly generated and the winner is determined based on the classic rules of the game.

## Rules

- **Rock vs Scissors**: Rock wins
- **Rock vs Paper**: Paper wins
- **Paper vs Scissors**: Scissors wins

## Features

- User can input their choice: Rock, Paper, or Scissors.
- Computer randomly generates its choice.
- The game determines and displays the winner based on the choices made by the user and the computer.

## Usage

1. Compile the program using a C++ compiler.
2. Run the compiled executable.
3. Follow the on-screen prompts to input your choice.
4. View the computer's choice and the result of the game.

## Sample Input/Output

    Welcome to Rock, Paper, Scissors!
    Enter your choice (0 = Rock, 1 = Paper, 2 = Scissors): 0
    You chose: Rock
    Computer chose: Scissors
    You win!

## Implementation Details

The program uses enums and functions to handle the game's logic and user interaction.

### Enums and Functions

- **enum Choice**: Represents Rock, Paper, and Scissors.
- **intToChoice(int num)**: Converts an integer to the corresponding Choice.
- **choiceToString(Choice choice)**: Converts a Choice to its string representation.
- **determineWinner(Choice userChoice, Choice computerChoice)**: Determines the winner based on the game's rules.

### Main Function

The main function seeds the random number generator, prompts the user for input, validates the input, generates a random choice for the computer, and displays the choices and the result of the game.
