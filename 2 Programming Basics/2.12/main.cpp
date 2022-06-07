#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    double new_pounds;
    cout << "Enter decimal pounds: ";
    cin >> new_pounds;

    int old_pounds = static_cast<int>(new_pounds);
    double fracPounds = new_pounds - old_pounds;

    double new_shillings =  fracPounds * 20;
    int old_shillings = static_cast<int>(new_shillings);
    double frac_shillings = new_shillings - old_shillings;

    int old_pence = static_cast<int>(frac_shillings * 12);
        
    cout << "Old money: " << old_pounds << "." << old_shillings << "." << old_pence << endl;

    return 0;
}

