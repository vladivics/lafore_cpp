#include<iostream>
using namespace std;

struct fraction{
    int num, den;
};

int main(int argc, const char * argv[])
{
    fraction num1, num2, num3;
    char temp;
    cout << "Enter first fraction: ";
    cin >> num1.num >> temp >> num1.den;
    cout << "Enter second fraction: ";
    cin >> num2.num >> temp >> num2.den;
  
    num3.num = num1.num * num2.den + num1.den * num2.num;
    num3.den = num1.den * num2.den;
    cout << "Sum of fractions is: " << num3.num << "/" << num3.den << endl;
    
    return 0;
}
