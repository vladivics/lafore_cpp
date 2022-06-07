#include <iostream>

using namespace std;

class fraction {
private:
    int num;
    int den;
public:
    void getfrac();
    void setfrac();
    void sumfrac(fraction ff1, fraction ff2);
};

int main(int argc, const char * argv[]) {
    
    fraction f1, f2, f3;
    char ch;
    do{
    f1.getfrac();
    f2.getfrac();
    cout << endl;
    f1.setfrac();
    f2.setfrac();
    f3.sumfrac(f1, f2);
    cout << "\n";
        cout << "\nDo you want to continue (y/n): ";
        cin >> ch;
    } while (ch == 'y');
    cout << endl;
  return 0;
}

void fraction::getfrac() {
    char temp;
    cout << "\nEnter fraction: (a/b): ";
    cin >> num >> temp >> den;
}
void fraction::setfrac() {
    cout << "Fraction is: ";
    cout << num << "/" << den << endl;
}

void fraction::sumfrac(fraction ff1, fraction ff2) {
    num = ff1.num*ff2.den+ff2.num*ff1.den;
    den = ff1.den*ff2.den;
    cout << "Franctions sum is " << num << "/" << den;
}
