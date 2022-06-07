#include <iostream>

using namespace std;

class employee{
    private:
    int number;
    float pay;
public:
    void input(){
        cout << "Enter employee's number: "; cin >> number;
        cout << "Enter " << number <<" employee pay: "; cin >> pay;
    }
    void output(){
        cout << number << " employee salary: " << pay<<endl;
    }
};

int main(int argc, const char * argv[]) {
    
    employee n1, n2, n3;
    
    n1.input();
    n2.input();
    n3.input();
    cout << endl;
    n1.output();
    n2.output();
    n3.output();
    cout <<endl;
    return 0;
}
