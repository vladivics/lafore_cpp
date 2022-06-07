//
//  main.cpp
//  7.7
//
//  Created by Vladimir Sevastyanov on 5/31/22.
//

#include <iostream>
#include <iso646.h>
using namespace std;

class money{
private:
    long double sum;
public:
    long double mstold(char s[]);
};

int main(int argc, const char * argv[]) {
    
    money m;
    char s[20];
    long double res;
    
    char ch;
    do{
        cout << "Enter the amount in the format '$123,456,789.99': ";
        cin >> s;
        
        res = m.mstold(s);
        printf("Sum is converted to %.2Lf", res);
        
        cout << "\nDo you want  to coninue? (y/n) ";
        cin >> ch;
        
    } while (ch != 'n');
    
    return 0;
}

long double money::mstold(char s[]){
    char ss[20];
    int j = 0;
    
    for(int i = 0; i < strlen(s); i++){
        if (s[i] >= '0' and s[i] <= '9'){
            ss[j] = s[i];
            j++;
        }
        if (s[i] == '.'){
            ss[j] = s[i];
            j++;
        }
    }
    ss[j] = '\0';
    
    // long double strtold( const char* str, char** str_end ); // (since C++11)
    sum = strtold(ss, nullptr);
    //printf("Sum: %Lf\n", sum);
    
    string test = to_string(sum);
    
    return sum;
}

