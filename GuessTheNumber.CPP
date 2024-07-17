#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "\n\t\t\tWelcome to Guess The Number Game!" << endl;
    cout << "You have to guess a number in limited choices based on your difficulty levels.\n\t\t\t************Good Luck!************" << endl;

    do
    {
        cout << "\nSelect Your Difficulty Level:\n1 : Easy!\n2 : Medium!\n3 : Pro!\n4 : End the game!\n";
        int level;
        cout << "Enter the level: " << endl;
        cin >> level;
        switch (level)
        {
            case 1:
            {
                srand(time(0));
                int actualNum = 1 + (rand() % 50);
                int playerGuess;
                cout << "\nYou have 10 choices for finding the Actual Number between 1 and 50.";
                int choices = 10;
                for (int i = 1; i <= 10; i++)
                {
                    cout << "\n\nEnter the number: ";
                    cin >> playerGuess;
                    if (playerGuess == actualNum)
                    {
                        cout << "Well played! You won, " << playerGuess << " is the actual number" << endl;
                        cout << "\t\t Thanks for playing...." << endl;
                        cout << "\t\tPlay again with us!!\n\n"<< endl;
                        break;
                    }
                    else
                    {
                        cout << "Nope, " << playerGuess << " is not the actual number\n";
                        if (playerGuess < actualNum)
                        {
                            cout << "Your Guess is too Low!" << endl;
                        }
                        else
                        {
                            cout << "Your Guess is too High!" << endl;
                        }
                        choices--;
                        cout << choices << " choices left. " << endl;
                        if (choices == 0)
                        {
                            cout << "You lose!!\n, You couldn't find the number, it was " << actualNum;
                            cout << "\n\t\tPlay again!!!\n\n";
                        }
                    }
                }
                break;
            }
            case 2:
            {   
                srand(time(0));
                int actualNum = 1 + (rand() % 100);
                int playerGuess;
                cout << "\nYou have 6 choices for finding the Actual Number between 1 and 100.";
                int choices = 7;
                for (int i = 1; i <= 6; i++)
                {   
                    cout << "\n\nEnter the number: ";
                    cin >> playerGuess;
                    if (playerGuess == actualNum)
                    {
                        cout << "Well played! You won, " << playerGuess << " is the actual number" << endl;
                        cout << "\t\tThanks for playing...." << endl;
                        cout << "\t\tPlay again with us!!\n\n"<< endl;
                        break;
                    }
                    else
                    {
                        cout << "Nope, " << playerGuess << " is not the actual number\n";
                        if (playerGuess < actualNum)
                        {
                            cout << "Your Guess is too Low!" << endl;
                        }
                        else
                        {
                            cout << "Your Guess is too High!" << endl;
                        }
                        choices--;
                        cout << choices << " choices left. " << endl;
                        if (choices == 0)
                        {
                            cout << "You lose!!\n, You couldn't find the number, it was " << actualNum;
                            cout << "\n\t\tPlay again !!!\n\n";
                        }
                    }   
                }
                break;
            }
            case 3:
            {
                srand(time(0));
                int actualNum = 1 + (rand() % 120);
                int playerGuess;
                cout << "\nYou have 5 choices for finding the Actual Number between 1 and 120.";
                int choices = 5;
                for (int i = 1; i <= 5; i++)
                {
                    cout << "\n\nEnter the number: ";
                    cin >> playerGuess;
                    if (playerGuess == actualNum)
                    {
                        cout << "Well played! You won, " << playerGuess << " is the actual number" << endl;
                        cout << "\t\tThanks for playing...." << endl;
                        cout << "\t\tPlay again with us!!\n\n"<< endl;
                        break;
                    }
                    else
                    {
                        cout << "Nope, " << playerGuess << " is not the actual number\n";
                        if (playerGuess < actualNum)
                        {
                            cout << "Your Guess is too Low!" << endl;
                        }
                        else
                        {
                            cout << "Your Guess is too High!" << endl;
                        }
                        choices--;
                        cout << choices << " choices left. " << endl;
                        if (choices == 0)
                        cout << "You lose!!\n,You couldn't find the number, it was " << actualNum;
                        cout << "\n\t\tPlay Again!!!\n\n";
                    }
                }
                break;
            }
            case 4:
            {
                int a;
                cout << "\t\tThanks for playing with us!!!,Wanna Play again then\n\t\t\tPress 1: ";
                cin >> a;
                if (a != 1)
                {
                    exit(0);
                }
                break;
            }
            default:
            {
                cout << "Enter a valid Option:,\nYour Option are 1::2::3::4\n";
            }
        }
    } while (1);
    return 0;
}
