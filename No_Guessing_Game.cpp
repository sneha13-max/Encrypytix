#include <iostream>
#include <cstdlib> //header file for rand()
#include <time.h>
using namespace std;

void numberGuessingGame(double randNumber)
{
    double number; 
    int count = 0;
    while (true)
    {
        cout << "Enter the number to guess below 100: ";
        cin >> number;
        count++;
        if (number == randNumber)
        {
            cout << "\nYou Won after " << count << " trials !!\n";
            break;
        }
        else if (number < randNumber) cout << "Number guessed is smaller. Kindly, Guess higher number\n\n";
        else cout << "Number guessed is larger. Kindly, Guess lower number\n\n";
    }
    cout << "\nThanks for playing the game\n";
}
int main()
{
    cout << "\nThe Number Guessing Game\n";
    srand(time(0));
    int input = 1;
    do
    {
        double randNumber = rand() % 100;
        numberGuessingGame(randNumber);
        cout << "\n\nDo you want to play the GAME again?\nEnter 1: YES\nEnter 0: NO\n";
        cin >> input;
    } while (input);
    return 0;
}