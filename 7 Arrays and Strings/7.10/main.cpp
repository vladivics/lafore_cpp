//
//  main.cpp
//  7.10
//
//  Created by Vladimir Sevastyanov on 5/31/22.
//

#include <iostream>
#include <iso646.h>

using namespace std;

class Matrix {
private:
    static const int s = 10;
    int ind1, ind2;
    int array[s][s];
public:
    Matrix(int a, int b) {
        ind1 = a;
        ind2 = b;
    }

    void putel(int index1, int index2, int temp) {
        if ((index1 >= 0 and index1 <= s) and (index2 >= 0 and index2 <= s)) {
            array[index1][index2] = temp;
        }

        else {
            cout << "array out of bounds";
            exit(1);
        }
    }
     
    int getel(int index1, int index2){
        return array[index1][index2];
    }

};

int main(int argc, const char * argv[]){
    Matrix m1(3, 4);
    
    int temp = 12345;
    m1.putel(7, 4, temp);
    
    return 0;
}
