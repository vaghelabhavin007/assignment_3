//3. (Control flow statements) program : 2- Number guessing game
#include <iostream>
using namespace std;

int main() 
{
    int number = 37;
    int guess, attempts = 0, maxAttempts = 10;

    cout << "\n\n\t Welcome to the Number Guessing Game!";
    cout << "\n\n\t I have chosen a number between 1 and 100.";
    cout << "\n\n\t You have " << maxAttempts << " attempts to guess it.";

    while (attempts < maxAttempts) 
	{
        cout << "\n\n\t Attempt " << attempts + 1 << ": Enter your guess: ";
        cin >> guess;  
        attempts++; 

        if (guess < number) 
		{
            cout << "\n\n\t Too low! Try again.";
        } else if (guess > number) 
		{
            cout << "\n\n\t Too high! Try again.";
        } else 
		{
            cout << "\n\n\t Congratulations! You guessed the number " << number << " correctly in.";
            break;  
        }
    }

    if (guess != number) 
	{
        cout << "\n\n\t Sorry, you've used all your attempts.";
    }

}
