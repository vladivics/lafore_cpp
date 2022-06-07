#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    char ch;
        do{
            int a, b, c, d, num, den;
            char f, sign;
            cout << "Enter first fraction: ";
            cin >> a >> f >> b;
            cout << "Operator: ";
            cin >> sign;
            cout << "Enter second fraction: ";
            cin >> c >> f >> d;

            switch(sign)
            {
                case '+':
                    num = a * d + b * c;
                    den = b * d;
                    cout << "Sum is: " << num << "/" << den << endl;
                    break;
                case '-':
                    num = a * d - b * c;
                    den = b * d;
                    cout << "Subtraction is: " << num << "/" << den << endl;
                    break;
                case '*':
                    num = a * c;
                    den = b * d;
                    cout << "Multiplication is: " << num << "/" << den << endl;
                    break;
                case '/':
                    num = a * d;
                    den = b * c;
                    cout << "Division is: " << num << "/" << den << endl;
                    break;
                default:
                    cout << "Invalid option";
                    break;
            }
            cout << "Do you want to continue (y/n): ";
            cin >> ch;
        }
        while(ch == 'y');
        
        return 0;
    }

