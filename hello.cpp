#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    cout << "\tWelcome to Guess The Number\n\n";

    cout << "Difficulties:\n\n1 - Easy\n2 - Medium\n3 - Hard\n4 - Hardcore\n5 - ULTRA VIOLENCE\n";
    int difficulty;

    do {
        cout << "Enter difficulty: ";
        cin >> difficulty;
    } while (difficulty > 5 || difficulty < 1);
    int randomCoef;

    switch (difficulty)
    {
        case 1:
            randomCoef = 10;
            break;
        case 2:
            randomCoef = 50;
            break;
        case 3:
            randomCoef = 100;
            break;
        case 4:
            randomCoef = 300;
            break;
        case 5:
            randomCoef = 9934249;
            break;
    }

    srand(static_cast<unsigned int>(time(0)));
    int random = rand();
    int secretNumb = (random % randomCoef) + 1;
    int tries = 0;
    int guess;
    do {
        cout << "Enter a guess: ";
        cin >> guess;
        ++tries;
        if (guess > secretNumb) {
            cout << "Too high!\n\n";
        }
        else if (guess < secretNumb) {
            cout << "Too low!\n\n";
        }
        else {
            cout << "\nThat's it! You got it in " << tries << " guesses!\n";
        }
    } while (guess != secretNumb);
    return 0;
}