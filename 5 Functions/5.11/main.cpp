#include <iostream>
using namespace std;

struct sterling{
    int pounds, shillings, pence;
};


sterling sum(sterling, sterling);
void set(sterling);

int main(int argc, const char * argv[]) {
    
    sterling s1, s2, ss;
    
    cout << "Enter first value: ";
    cout << "\npound: ";
    cin >> s1.pounds;
    cout << "shilling: ";
    cin >> s1.shillings;
    cout << "pence: ";
    cin >> s1.pence;
    
    cout << "\nEnter second value: ";
    cout << "\npound: ";
    cin >> s2.pounds;
    cout << "shilling: ";
    cin >> s2.shillings;
    cout << "pence: ";
    cin >> s2.pence;
    
    ss = sum(s1, s2);
    
    cout << "\nSum of values is ";
    set(ss);
    
    return 0;
        
}

sterling sum(sterling a, sterling b)
{
    sterling sum;
    
    sum.pounds = a.pounds + b.pounds;
    sum.shillings = a.shillings + b.shillings;
    sum.pence = a.pence + b.pence;
    
    if (sum.shillings > 19)
    {
        sum.pounds += sum.shillings / 20;
        sum.shillings %= 20;
    }

    if (sum.pence > 11)
    {
        sum.shillings += sum.shillings / 12;
        sum.pence %= 12;
    }
    
    return sum;
}

void set(sterling sum)
{
    cout << sum.pounds << "." << sum.shillings << "." << sum.pence;
}

