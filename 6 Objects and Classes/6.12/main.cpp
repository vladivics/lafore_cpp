#include <iostream>
#include <iomanip>

using namespace std;

class fraction {
private:
    int num, den;
public:
    fraction (int n, int d): num(n), den(d) {}
    void init(int n, int d){
        num = n;
        den = d;
    }
    
    void setf(){
        cout << num << "/" << den;
    }
    void fmul(fraction, fraction);
    void lowterms();
};


int main(int argc, const char * argv[]) {
    fraction f(0, 0), f1(0, 0), F(0, 0);
    int i, k;
    cout << "Enter the denominator: ";
    cin >> k;
    cout << endl;
    
for (i=1; i<k; i++) // диагональ
{
    if (i==1) {
        cout << setw(7);
    }
    else cout << setw(5);
    f.init(i, k);
    f.lowterms();
    f.setf();
}
    cout << endl;
    
for (i=1; i<(k*7); i++) // ***
    {
        cout << '*';
    }
    
for (i=1; i<k; i++) // вертикаль
    {
        cout << endl;
        f.init(i, k);
        f.lowterms();
        f.setf();
        for (int j=1; j<k; j++)
        {
            cout << setw(4);
            f1.init(j, k);
            f1.lowterms();
            F.fmul(f, f1);
            F.lowterms();
            F.setf();
        }
        cout << endl;
    }

    cout << endl;
    return 0;
}

void fraction::fmul(fraction f1, fraction f2) {
    num = f1.num * f2.num;
    den = f1.den * f2.den;
}

void fraction::lowterms() {
    long tnum, tden, temp, gcd;
    tnum = labs(num);
    tden = labs(den);
    if(tden == 0){
        cout << "Error: den = 0! "; exit(1);
    }
    else if(tnum == 0){
        num = 0; den = 1; return;
    }
    while(tnum != 0)
    {
    if(tnum < tden){
        temp = tnum; tnum = tden; tden = temp;
    }
      tnum = tnum - tden;
    }
    gcd = tden;
    num = num / gcd;
    den = den / gcd;
}

 
