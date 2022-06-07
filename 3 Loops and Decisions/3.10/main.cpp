#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    
    double final_amount, amount, interest, temp;
    
    cout << "Enter the final amount you want to get: ";
    cin >> final_amount;
    cout << "Enter the principal amount: ";
    cin >> amount;
    cout << "Enter the rate of interest: ";
    cin >> interest;
    
    temp = amount;
    int years = 0;
    
    while (temp < final_amount)
    {
        temp *= (1 + (interest / 100));
        years++;
    }
    
    cout << years << endl;
    return 0;
}

