#include <iostream>

using namespace std;

int power (int, int=2);
double power (double, int=2);
double power (char, int=2);
long power (long, int=2);
float power (float, int=2);


int main(int argc, const char * argv[]) {

    
    int i;
    cout << "Enter a int value: ";
    cin >> i;
    cout << power(i)<<endl;
    
    double d;
    cout << "Enter a double value: ";
    cin >> d;
    cout << power(d)<<endl;
    
    char ch;
    cout << "Enter a char value: ";
    cin >> ch;
    cout << power (ch)<<endl;
    
    long lo;
    cout << "Enter a long value: ";
    cin >> lo;
    cout << power(lo)<<endl;
    
    float fl;
    cout << "Enter a float value: ";
    cin >> fl;
    cout << power(fl)<<endl;

    return 0;
}



int power (int p, int n)
{
   int x=1;
    
    for (int i=0; i < n; i++)
        x *= p;
    return x;
}


double power (double p, int n)
{
   double x=1;
    
    for (int i=0; i < n; i++)
        x *= p;
    return x;
}


double power (char p, int n)
{
   char x=1;
    
    for (int i=0; i < n; i++)
        x *= p;
    return x;
}


long power (long p, int n)
{
    long x=1;
    
    for (int i=0; i < n; i++)
        x *= p;
    return x;
}


float power (float p, int n)
{
   float x=1;
    
    for (int i=0; i < n; i++)
        x *= p;
    return x;
}

