#include <bits/stdc++.h>
using namespace std;

int main()
{
    do
    {
        double num1, num2, result;
        int operation;
        cout << "\n*******************************CALCULATOR*******************************\n";
        cout << "Enter the Operation:\n1. Addition(+)\n2. Subtraction(-)\n3. Multiplication(x)\n4. Division(/)\n5. Exit\n";
        cout << "Enter your Choice: ";
        cin >> operation;

        switch (operation)
        {
        case 1:
            cout << "Enter Your First Number: ";
            cin >> num1;
            cout << "Enter Your Second Number: ";
            cin >> num2;
            result = num1 + num2;
            cout << "Addition of " << num1 << " and " << num2 << " is: " << result;
            break;
        case 2:
            cout << "Enter Your First Number: ";
            cin >> num1;
            cout << "Enter Your Second Number: ";
            cin >> num2;
            result = num1 - num2;
            cout << "Subtraction of " << num1 << " and " << num2 << " is: " << result;
            break;
        case 3:
            cout << "Enter Your First Number: ";
            cin >> num1;
            cout << "Enter Your Second Number: ";
            cin >> num2;
            result = num1 * num2;
            cout << "Multiplication of " << num1 << " and " << num2 << " is: " << result;
            break;
        case 4:
            cout << "Enter Your First Number: ";
            cin >> num1;
            cout << "Enter Your Second Number: ";
            cin >> num2;
            result = num1 / num2;
            cout << "Division of " << num1 << " and " << num2 << " is: " << result;
            break;
        case 5:
            cout << "----------------------Thanks For Using Calculator----------------------\n";
            exit(0);
        default:
            cout << "!!!!!!!!!!!!!!!!!!!!!!Enter a Valid Operation!!!!!!!!!!!!!!!!!!!!!!";
        }

    } while (1);
}