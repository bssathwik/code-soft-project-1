#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main()
{
    cout << "-----------------------------------------------------------" << endl;
    cout << "************************GAME STARTS************************" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << "\n\t\t\tWelcome to GuessTheNumber game!" << endl;
    cout << "You have to guess a number between 1 and 100. "
            "You'll have limited choices based on the "
            "level you choose"
         << endl;

    while (true)
    {
        cout << "\nEnter the difficulty level: \n";
        cout << "1 for easy!\t";
        cout << "2 for medium!\t";
        cout << "3 for difficult!\t";
        cout << "0 for ending the game!\n"
             << endl;

        int choice;
        cout << "Enter the number: ";
        cin >> choice;

        srand(time(0));
        int key = 1 + (rand() % 100);
        int playerChoice;

        if (choice == 1)
        {
            cout << "\nYou have 10 choices for finding the "
                    "secret number between 1 and 100.";
            int choicesLeft = 10;
            for (int i = 1; i <= 10; i++)
            {

                cout << "\n\nEnter the number: ";
                cin >> playerChoice;

                if (playerChoice == key)
                {
                    cout << "Well played! You won, "
                         << playerChoice
                         << " is the secret number" << endl;
                    cout << "\t\t\t Thanks for playing...."
                         << endl;
                    cout << "Play the game again with "
                            "us!!\n\n"
                         << endl;
                    break;
                }
                else
                {
                    cout << "Nope, " << playerChoice
                         << " is not the right number\n";
                    if (playerChoice > key)
                    {
                        cout << "The secret number is "
                                "smaller than the number "
                                "you have chosen"
                             << endl;
                    }
                    else
                    {
                        cout << "The secret number is "
                                "greater than the number "
                                "you have chosen"
                             << endl;
                    }
                    choicesLeft--;
                    cout << choicesLeft << " choices left. "
                         << endl;
                    if (choicesLeft == 0)
                    {
                        cout << "You couldn't find the "
                                "secret number, it was "
                             << key
                             << ", You lose!!\n\n";
                        cout << "Play the game again to "
                                "win!!!\n\n";
                    }
                }
            }
        }

        else if (choice == 2)
        {
            cout << "\nYou have 7 choices for finding the "
                    "secret number between 1 and 100.";
            int choicesLeft = 7;
            for (int i = 1; i <= 7; i++)
            {

                cout << "\n\nEnter the number: ";
                cin >> playerChoice;

                if (playerChoice == key)
                {
                    cout << "Well played! You won, "
                         << playerChoice
                         << " is the secret number" << endl;
                    cout << "\t\t\t Thanks for playing...."
                         << endl;
                    cout << "Play the game again with "
                            "us!!\n\n"
                         << endl;
                    break;
                }
                else
                {
                    cout << "Nope, " << playerChoice
                         << " is not the right number\n";
                    if (playerChoice > key)
                    {
                        cout << "The secret number is "
                                "smaller than the number "
                                "you have chosen"
                             << endl;
                    }
                    else
                    {
                        cout << "The secret number is "
                                "greater than the number "
                                "you have chosen"
                             << endl;
                    }
                    choicesLeft--;
                    cout << choicesLeft << " choices left. "
                         << endl;
                    if (choicesLeft == 0)
                    {
                        cout << "You couldn't find the "
                                "secret number, it was "
                             << key
                             << ", You lose!!\n\n";
                        cout << "Play the game again to "
                                "win!!!\n\n";
                    }
                }
            }
        }

        else if (choice == 3)
        {
            cout << "\nYou have 5 choices for finding the "
                    "secret number between 1 and 100.";
            int choicesLeft = 5;
            for (int i = 1; i <= 5; i++)
            {

                cout << "\n\nEnter the number: ";
                cin >> playerChoice;

                if (playerChoice == key)
                {
                    cout << "Well played! You won, "
                         << playerChoice
                         << " is the secret number" << endl;
                    cout << "\t\t\t Thanks for playing...."
                         << endl;
                    cout << "Play the game again with "
                            "us!!\n\n"
                         << endl;
                    break;
                }
                else
                {
                    cout << "Nope, " << playerChoice
                         << " is not the right number\n";
                    if (playerChoice > key)
                    {
                        cout << "The secret number is "
                                "smaller than the number "
                                "you have chosen"
                             << endl;
                    }
                    else
                    {
                        cout << "The secret number is "
                                "greater than the number "
                                "you have chosen"
                             << endl;
                    }
                    choicesLeft--;
                    cout << choicesLeft << " choices left. "
                         << endl;
                    if (choicesLeft == 0)
                    {
                        cout << "You couldn't find the "
                                "secret number, it was "
                             << key
                             << ", You lose!!\n\n";
                        cout << "Play the game again to "
                                "win!!!\n\n";
                    }
                }
            }
        }

        else if (choice == 0)
        {
            exit(0);
        }
        else
        {
            cout << "Wrong choice, Enter valid choice to "
                    "play the game! (0,1,2,3)"
                 << endl;
        }
    }
    return 0;
}
