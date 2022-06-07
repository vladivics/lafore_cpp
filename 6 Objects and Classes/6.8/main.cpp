#include <iostream>

using namespace std;

class order{
private:
    int static number;
    int n;
public:
    order() {
        number++;
        n = number;
    }
    int setfunc() {return n;}
};

int order::number = 0;

int main(int argc, const char * argv[]) {
    
    order n1, n2, n3;
    
    cout <<"Object number: " << n1.setfunc();
    cout <<"\nObject number: " << n2.setfunc();
    cout <<"\nObject number: " << n3.setfunc();
    
    cout << endl;
    return 0;
}
