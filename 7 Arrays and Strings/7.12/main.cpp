//
//  main.cpp
//  7.12
//
//  Created by Vladimir Sevastyanov on 5/31/22.
//

#include <iostream>
#include <iso646.h>

using namespace std;

class bMoney
{
private:
    long double money;
public:
    bMoney() { money = 0.0; }
    bMoney(char s[]) { mstold(s); }
    
    long double mstold(char []);
    
    string ldtoms(long double);
    
    void madd(bMoney m1, bMoney m2){
        money =  m1.money + m2.money;
    }
    
    void getmoney(){
        char ss[40];
        cout << "Enter the amount in the format '$123,456,789.99': ";
        cin >> ss;
        mstold(ss);
    }
    
    void putmoney(){
        cout << "Sum is: " << ldtoms(money);
        cout << endl;
    }
};

int main(int argc, const char * argv[]) {
    bMoney m[10];
     
    int j = 0;
    char ch;
    do{
        if (j == 10){
            cout << "Array overflow";
            exit(1);
        }
         
        m[j++].getmoney();
      
        cout << "Do you want to coninue? (y/n): ";
        cin >> ch;
        cout << endl;
         
     } while (ch != 'n');
     
    
    bMoney sum;
    for (int i = 0; i < j; i++){
        sum.madd(sum, m[i]);
    }
     
    sum.putmoney();
    
    return 0;
}

long double bMoney::mstold(char s[]){
    char ss[20];
    int j = 0;
    
    for(int i = 0; i < strlen(s); i++){
        if (s[i] >= '0' and s[i] <= '9'){
            ss[j++] = s[i];
        }
        if (s[i] == '.'){
            ss[j++] = s[i];
        }
    }
    ss[j] = '\0';
   
    // long double strtold( const char* str, char** str_end ); // (since C++11)
    money = strtold(ss, nullptr);
    //printf("Sum: %Lf\n", money);
    
    return money;
}

string bMoney::ldtoms(long double money){
    string s = to_string(money);
    
    char temp[20];
    int k;
    for (k = 0; k < s.length() - 4; k++){
        temp[k] = s[k];
    }
    temp[k] = '\0';
    
    char arr[20];
    int i = 0;
    int n = 0;
    int j = 0;
    char com = ',';
    
    if ((strlen(temp) - 3) % 3 == 2){
        
        arr[i++] = temp[n++];
        arr[i++] = temp[n++];
        arr[i++] = com;
    }
    
    else if ((strlen(temp)  - 3) % 3 == 1){
        arr[i++] = temp[n++];
        arr[i++] = com;
    }

    for (j = n; j < strlen(temp) - 3; j++){
        arr[i++] = temp[j];
        if (((j - n + 1) % 3 == 0) and (j != strlen(temp) - 3 - 1))
            arr[i++] = com;
    }

    arr[i++] = temp[j++];
    arr[i++] = temp[j++];
    arr[i++] = temp[j];
    arr[i]   = '\0';
    
    string d = "$";
    string ds = d + arr;
  
    //cout << ds;
    return ds;
}

