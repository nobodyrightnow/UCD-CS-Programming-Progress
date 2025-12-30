/* Write a C program to play a game of ROCK, PAPER, SCISSORS (RPS). 
RPS is a two-player game in which each player chooses either ROCK, PAPER or SCISSORS. 
Winning the game is determined by the following rules:
• ROCK beats SCISSORS
• SCISSORS beats PAPER
• PAPER beats ROCK

Each game between the user and the computer is played as follows:
• The user is asked to choose an option (i.e. 1 for ROCK, 2 for PAPER or 3 for SCISSORS).
• The computer randomly chooses ROCK, PAPER or SCISSORS. Code is provided to you for this task – please do not edit this code
• The program should display the user’s and the computer’s choices.
• The program should compare the user’s choice with the computer’s choice and determine who won the game according to the above rules. 

The program should then display the outcome of the game.
• Note: the outcome of a game is either (i) the user has won, (ii) the computer has won, or (iii) the game is a draw (i.e. when the same choice is made by the user and the computer), in which case neither the user nor the computer has won.

Each time the program is run, 5 games should be played between the user and the computer. 
The program should record how many games the user has won and how many games the computer has won. 
At the end of the program, a message should be displayed which shows how many of the 5 games have been won by the user and the computer.

In your program:
• Use if-else statements to determine the appropriate messages to display.
• Use constants in your code to make your program as readable as possible (see the code provided on Moodle).
• Optional: a good program will check the user’s input for each game (i.e. 1 for ROCK, 2 for PAPER or 3 for SCISSORS) to ensure that it is valid and ask the user to enter it
again if it is not.

Instructions:
1. Use the code provided on Moodle as the star4ng point for your program. Do not
edit any of the statements in the code provided.
2. Copy and paste this code into Sublime Text and save the program on your machine.
3. Complete, compile and run your program on your machine and check that it produces the correct output for the test case provided.
4. If there are any errors in the output, revise the program on your machine, and repeat steps 3 and 4.

Here is a sample run of the program:
Enter the seed (a positive integer):
333
Enter user choice - 1 for ROCK, 2 for PAPER or 3 for SCISSORS:
2
User choice is PAPER
Computer choice is PAPER
Draw
Enter user choice - 1 for ROCK, 2 for PAPER or 3 for SCISSORS:
1
User choice is ROCK
Computer choice is SCISSORS
User wins
Enter user choice - 1 for ROCK, 2 for PAPER or 3 for SCISSORS:
3
User choice is SCISSORS
Computer choice is ROCK
Computer wins
Enter user choice - 1 for ROCK, 2 for PAPER or 3 for SCISSORS:
2
User choice is PAPER
Computer choice is ROCK
User wins
Enter user choice - 1 for ROCK, 2 for PAPER or 3 for SCISSORS:
1
User choice is ROCK
Computer choice is SCISSORS
User wins
In 5 games, computer won 1 times and user won 3 times */

#include <stdio.h>

#define ROCK 1
#define PAPER 2
#define SCISSORS 3
#define NUM_GAMES 5

int main(void)
{
  /* declare variables (you will need to declare additional variables here) */
  int user_choice, computer_choice;
  int game;
  int seed;
  int user_wins = 0, computer_wins = 0;
  
  /* used to select the computer's choice in each game */
  printf("Enter the seed (a positive integer):\n");
  scanf("%d", &seed);
  
    for (game = 0; game < NUM_GAMES; game++) /* loop for each game */
    {
        /* initialise variables for the current game */

        /* read the user's choice */
        printf("Enter user choice - 1 for ROCK, 2 for PAPER or 3 for SCISSORS:\n");
        scanf("%d", &user_choice);

        /* randomly select the computer's choice - DO NOT EDIT */
        computer_choice = 1 + (seed = (seed + 321) * 3 / 4) % 3;

        /* display the user's and computer's choices */
        printf("User choice is ");
        if (user_choice == ROCK)
        {
            printf("ROCK\n");
        }
        else if (user_choice == PAPER)
        {
            printf("PAPER\n");
        }
        else
        {
            printf("SCISSORS\n");
        }
        printf("Computer choice is ");
        if (computer_choice == ROCK)
        {
            printf("ROCK\n");
        }
        else if (computer_choice == PAPER)
        {
            printf("PAPER\n");
        }
        else
        {
            printf("SCISSORS\n");
        }

        /* check if user or computer has won (neither win if it is a draw) */
        if ((user_choice == ROCK && computer_choice == PAPER) || (user_choice == PAPER && computer_choice == SCISSORS) || (user_choice == SCISSORS && computer_choice == ROCK))
        {
            computer_wins++;
            printf("Computer wins\n"); /* display the outcome of the current game */
        }
        else if (user_choice == computer_choice)
        {
            printf("Draw\n"); /* display the outcome of the current game */
        }
        else
        {
            user_wins++;
            printf("User wins!\n"); /* display the outcome of the current game */
        }
    }

    /* display the overall outcome */
    printf("In 5 games, computer won %d times and user won %d times\n", computer_wins, user_wins);
  
  return 0;
}