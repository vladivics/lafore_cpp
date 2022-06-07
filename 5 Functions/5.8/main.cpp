#include <iostream>

using namespace std;

void swap (int &a, int &b)
{
int t = a;
a = b;
b = t;
}

int main(int argc, const char * argv[])
{
    int n,k;
    cin >> n >> k;
    swap (n, k);
    cout << n << k;

    return 0;
}
