#include <iostream>
using namespace std;

struct fraction {
    int num, den;
};


fraction fadd(fraction, fraction);
fraction fsub (fraction, fraction);
fraction fmul(fraction, fraction);
fraction fdiv(fraction, fraction);



int main(int argc, const char * argv[]) {
    
    char ch;
    fraction f1, f2, f3;
    
    do{
        char t, p;
    cout << "Enter the first fraction: ";
    cin >> f1.num >> t >> f1.den;
    
    cout << "Enter arithmetic sign (+, -, *, /): ";
    cin >> p;
    
    cout << "Enter the second fraction: ";
    cin >> f2.num >> t >> f2.den;
    
   
    switch (p) {
        
        case '+':
                f3 = fadd(f1, f2);
                cout << "Result is: " << f3.num << "/" << f3.den << endl;
            break;
        case '-':
                f3 = fsub(f1, f2);
                cout << "Result is: " << f3.num << "/" << f3.den << endl;
            break;
        case '*':
                f3 = fmul(f1, f2);
                cout << "Result is: " << f3.num << "/" << f3.den << endl;
            break;
        case '/':
                f3 = fdiv(f1, f2);
                cout << "Result is: " << f3.num << "/" << f3.den << endl;
            break;
            
        default: cout << "Error" << endl;
            break;
    }
        cout << "Do you want to continue (y/n): ";
        cin >> ch;
        
    } while (ch  == 'y');
    
    return 0;
}

fraction fadd(fraction f1, fraction f2)
{
    fraction f3;
    f3.num = f1.num*f2.den + f2.num*f1.den;
    f3.den = f1.den*f2.den;
    return f3;
}

fraction fsub (fraction f1, fraction f2)
{
    fraction f3;
    f3.num = f1.num*f2.den - f2.num*f1.den;
    f3.den = f1.den*f2.den;
    return f3;
}

fraction fmul(fraction f1, fraction f2)
{
    fraction f3;
    f3.num = f1.num*f2.num;
    f3.den = f1.den*f2.den;
    return f3;
}

fraction fdiv(fraction f1, fraction f2)
{
    fraction f3;
    f3.num = f1.num*f2.den;
    f3.den = f1.den*f2.num;
    return  f3;
}

