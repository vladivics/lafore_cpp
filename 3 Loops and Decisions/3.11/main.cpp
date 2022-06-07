#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    char ch;
    do
    {
        char sign, point;
        int pounds1, shillings1, pence1, pounds2, shillings2, pence2, number;
        
        cout << "Enter first amount: £";
        cin >> pounds1 >> point >> shillings1 >> point >> pence1;
        
        cout << "Operation +, -, *, /: ";
        cin >> sign;
        
        if (sign == '+' || sign == '-')
        {
            cout << "Enter second amount: £";
            cin >> pounds2 >> point >> shillings2 >> point >> pence2;
            
            switch (sign)
            {
                case '+':
                    pounds1  += pounds2;
                    shillings1 += shillings2;
                    pence1 += pence2;
                    break;
                    
                case '-':
                    pounds1  -= pounds2;
                    shillings1 -= shillings2;
                    pence1 -= pence2;
                    break;
                    
                default:
                    cout << "Invalid option" << endl;
                    break;
            }
        }
        
        if (sign == '*' || sign == '/')
        {
            cout << "Enter number: ";
            cin >> number;
            
            switch (sign)
            {
                case '*':
                    pounds1  *= number;
                    shillings1 *= number;
                    pence1 *= number;
                    break;
                case '/':
                    pounds1  /= number;
                    shillings1 /= number;
                    pence1 /= number;
                    break;
            }
        }
        
        if (pence1 > 11)
        {
            shillings1 += pence1/12;
            pence1 %= 12;
        }
        
        if (shillings1 > 19)
        {
            pounds1 += shillings1/20;
            shillings1 %= 20;
        }
       
        cout << "Amount after performing " << sign << " is £" << pounds1 << "." << shillings1 << "." << pence1 << endl;
                cout << "Do you want to continue (y/n): ";
                cin >> ch;
    }
    while(ch == 'y');
    
    return 0;
}
