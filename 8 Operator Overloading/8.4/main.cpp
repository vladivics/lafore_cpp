//
//  main.cpp
//  8.4
//
//  Created by Vladimir Sevastyanov on 6/13/22.
//

#include <iostream>
#include <iso646.h>
using namespace std;

class Int{
private:
    int num;
public:
    Int(): num(0) {}
    Int(int n): num(n) {}
        
    Int operator+(Int d) const{
        int n = num + d.num;
        return Int(n);
    }
    
    Int operator-(Int d) const{
        int n = num - d.num;
        return Int(n);
    }
    
    Int operator*(Int d) const{
        int n = num * d.num;
        return Int(n);
    }
    
    Int operator/(Int d) const{
        int n = num / d.num;
        return Int(n);
    }
    
    void get() {
        cout << "Enter number: ";
        cin >> num;
    }
    
    void show() {
        cout << num << endl;
    }
};


int main(int argc, const char * argv[]) {
    Int n1;
    Int n2;
    Int n3;
    
    char ch;
    
    do{
        n1.get();
        n2.get();
        char s;
        cout << "Enter sign (+, -, *, /): ";
        cin >> s;
        switch (s) {
            case '+':
                n3 = n2 + n1;
                break;
            case '-':
                n3 = n2 - n1;
                break;
            case '*':
                n3 = n2 * n1;
                break;
            case '/':
                n3 = n2 / n1;
                break;
                
            default: cout << "This sigh is not exist" << endl;
                break;
        }
        
        n3.show();
        
        cout << "\nDo you wanna continue? (y/n): ";
        cin >> ch;
        
    } while (ch != 'n');
    
    return 0;
}





