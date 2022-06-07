#include <iostream>

using namespace std;

class Int{
private:
    int num;
public:
    Int() { num = 0; }
    
    Int(int z) { num = z; }
        
    void sum(Int n1, Int n2) {
        num  = n1.num + n2.num;
    }
    
    void show() {
        cout << num << endl;
    }
};

int main(int argc, const char * argv[]) {
    
    Int n1(4);
    Int n2(6);
    
    Int n3;
    n3.sum(n1, n2);
    n3.show();

    return 0;
}
