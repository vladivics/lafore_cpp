#include <iostream>

using namespace std;

struct sterling {
    int pounds, shillings, pence;
};

int main(int argc, const char * argv[]) {
    
    sterling money;
    
    double newPounds;
    cout << "Enter pounds: ";
    cin >> newPounds;
    
    money.pounds = static_cast<int>(newPounds);
    double newPence = newPounds - money.pounds;
    
    double oldShillings = newPence*20;
    money.shillings = static_cast<int>(oldShillings);
    
    double oldPence = oldShillings - money.shillings;
    money.pence = static_cast<int>(oldPence*12);
    
    cout << "Old money: " << money.pounds << "."<< money.shillings << "." <<money.pence << endl;
    
    return 0;
}
