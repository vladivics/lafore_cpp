//
//  main.cpp
//  7.8
//
//  Created by Vladimir Sevastyanov on 5/26/22.
//

#include <iostream>
#include <iso646.h>

using namespace std;

class safearr{
private:
    static const int LIMIT = 10;
    int array[LIMIT];
public:
    
    void putel(int, int);
    
    int getel(int);
};

int main(int argc, const char * argv[]) {

    safearr a;
    int temp = 12;
    
    a.putel(7, temp);
    temp = a.getel(7);
 
    return 0;
}

void safearr::putel(int i, int val){
    
    if (i > LIMIT or i < 0){
        cout << "Array out of bounds" << endl;
        exit(1);
    }
    else val = array[i];
}

int safearr::getel(int i){
    
    if (i < 0 or i > LIMIT){
        cout << "Error" << endl;
        exit(1);
    }
    else return array[i];
}
