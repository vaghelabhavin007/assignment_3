//4. (Function and scope) program : 1 - simlpe calculator using functions
#include <iostream>
using namespace std;

class Calculator 
{
public:

    int add(int a, int b) 
	{
        return a + b;
    }

    int subtract(int a, int b) 
	{
        return a - b;
    }

    int multiply(int a, int b) 
	{
        return a * b;
    }

    float divide(int a, int b) 
	{
        if (b != 0)
            return a / b;
        else 
		{
            cout << "Error: Division by zero is not allowed!";
            return 0;
        }
    }
};

main() 
{
    int num1, num2, choice;
    Calculator calc;

    while (true) 
	{
        cout << "\n\n\t Simple Calculator\n";
        cout << "\n\n\t 1. Add\n";
        cout << "\n\n\t 2. Subtract\n";
        cout << "\n\n\t 3. Multiply\n";
        cout << "\n\n\t 4. Divide\n";
        cout << "\n\n\t 5. Exit\n";
        cout << "\n\n\t Enter your choice: ";
        cin >> choice;

        if (choice == 5) 
		{
            break;
        }

        cout << "\n\n\t Enter two numbers: ";
        cin >> num1 >> num2;

        switch (choice) 
		{
            case 1:
                cout << "Result: " << calc.add(num1, num2);
                break;
            case 2:
                cout << "Result: " << calc.subtract(num1, num2);
                break;
            case 3:
                cout << "Result: " << calc.multiply(num1, num2);
                break;
            case 4:
                cout << "Result: " << calc.divide(num1, num2);
                break;
            default:
                cout << "\n\n\t Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
