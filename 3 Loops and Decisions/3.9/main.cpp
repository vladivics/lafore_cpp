#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    int n, m, i;
    int c = 1;
    
    cout << "Guests: ";
    cin >> n;
    cout << "Chairs: ";
    cin >> m;
    
    for (i = 0; i < m; i++)
    {
        c = c * (n-i);
    }
    cout << "Options: "<< c << endl;
    
    return 0;
}

