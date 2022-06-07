#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[])
{
    double f, sh, p;
    cout << "Enter pounds: ";
    cin >> f;
    cout << "Enter shillings: ";
    cin >> sh;
    cout << "Enter pence: ";
    cin >> p;

    double newF = f + sh/20 + p/240;
    
    cout << "Decimal Pounds: " << round(newF*100)/100 << endl;
   
    return 0;
}


