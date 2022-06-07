//
//  main.cpp
//  7.5
//
//  Created by Vladimir Sevastyanov on 5/31/22.
//

#include <iostream>
using namespace std;

const int s = 100;

class fraction {
private:
    int num;
    int den;
public:
    fraction() {};
    fraction(int n, int d) : num(n), den(d) {};
    
    void set() {
        num = rand() % 100 + 1;
        den = rand() % 100 + 1;
        cout << "\nYour random fraction: "  << num << "/" << den;
    }

    fraction fadd(fraction n) {
        fraction sum;
        sum.num = num * n.den + n.num * den;
        sum.den = den * n.den;
        return sum;
    }

    void mid(int i) {
        num *= 1;
        den *= i;
    }

    void lowterms() {
        long tnum, tden, temp, gcd;

        tnum = labs(num);
        tden = labs(den);

        if (tden == 0) {
            cout << "Illegal fraction: division by 0";
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

        cout << "Middle fractions value : " << num << "/" << den << endl;
    }
};


int main(int argc, const char * argv[]) {
    fraction fracs[s], sum(0, 1);
    
    char ch;
    int i = 0;

    do {
        fracs[i].set();
        fracs[i++];
        cout << "\nDo you want to repeat (y/n): ";
        cin >> ch;
    } while (ch != 'n');
    
    for (int j = 0; j < i; j++) {
        sum = sum.fadd(fracs[j]);
    }

    sum.mid(i);
    sum.lowterms();

    return 0;
}
