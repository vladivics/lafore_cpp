//
//  main.cpp
//  8.7
//
//  Created by Vladimir Sevastyanov on 6/14/22.
//

#include <iostream>
using namespace std;

class fraction {
private:
    int num;
    int den;
public:
    fraction(): num(0), den(0) {}
    fraction(int n, int d): num(n), den(d) {}
    
    void set(){
        char p;
        cout << "Enter fraction (n/d): ";
        cin >> num >> p >> den;
    }

    fraction operator+(fraction n){ //n2=n
        fraction sum;
        sum.num = num * n.den + n.num * den;
        sum.den = den * n.den;
        return sum;
    }

    fraction operator-(fraction n){
        fraction sum;
        sum.num = num * n.den - n.num * den;
        sum.den = den * n.den;
        return sum;
    }

    fraction operator*(fraction n){
        fraction sum;
        sum.num = num * n.num;
        sum.den = den * n.den;
        return sum;
    }

    fraction operator/(fraction n){
        fraction sum;
        sum.num = num * n.den;
        sum.den = den * n.num;
        return sum;
    }
    
    bool operator== (fraction n) {
        if ((num == n.num) && (den == n.den))
            return true;
        else
            return false;
    }

    void lowterms() {
        long tnum, tden, temp, gcd;

        tnum = labs(num);
        tden = labs(den);

        if (tden == 0) {
            cout << "Illegal fraction: division by 0" << endl;
            exit(1);
        }
        else if (tnum == 0) {
            num = 0;
            den = 1;
            return;
        }

        while (tnum != 0) {
            if (tnum < tden) {
                temp = tnum;
                tnum = tden;
                tden = temp;
            }
            tnum = tnum - tden;
        }
        gcd = tden;
        num = num / gcd;
        den = den / gcd;
        if (den == 1){
            cout << "Number's value is " << num << endl;
        }
        else
            cout << "Fraction value is " << num << "/" << den << endl;
    }
};


int main(int argc, const char * argv[]) {
    fraction n1, n2, sum;
    fraction f(0, 1);
    char ch;
    
    do {
        char var;
    
        n1.set();
        n2.set();
        cout << "Enter operation (+, -, *, /): ";
        cin >> var;

        switch (var)
        {
        case '+':
            sum = n1 + n2;
            sum.lowterms();
            break;
        case '-':
            sum = n1 - n2;
            sum.lowterms();
            break;
        case '*':
            sum = n1 * n2;
            sum.lowterms();
            break;
        case '/':
            if ((n1 == f) && (n2 == f)){
                cout << "0 in den! " << endl;
                break;
            }
            else{
                sum = n1 / n2;
                sum.lowterms();
                break;
            }
        default:
            break;
        }
        
        cout << "\nDo you want to repeat (y/n)? ";
        cin >> ch;
    } while (ch != 'n');
    

    return 0;
}











