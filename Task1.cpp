/* A program that generates a random number and asks the user to guess it
   and tells whether the guess is too high or too low */

#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main()
{
    srand(time(0));
    int a = rand() % 5000;
    cout << "Guess what number is generated\n(hint: the number is less than 5000)\n";
    int b;
    do
    {
        cin >> b;
        if (a == b)
        {
            break;
        }
        else
        {
            cout << "Your guess is ";
            if (b - a >= 1000)
            {
                cout << "too high";
            }
            else if (b - a >= 100 && b - a < 1000)
            {
                cout << "high";
            }
            else if ((b - a < 100 && b - a >= 10) || (b - a < -10 && b - a > -100))
            {
                cout << "close";
            }
            else if ((b - a < 10 && b - a > 0) || (b - a > -10 && b - a < 0))
            {
                cout << "too close";
            }
            else if (b - a <= -100 && b - a > -1000)
            {
                cout << "low";
            }
            else if (b - a <= -1000)
            {
                cout << "too low";
            }
            cout << "\nTry Again ";
        }
    } while (a != b);

    cout << "\nCongratulations! You guessed it";
    return 0;
}
