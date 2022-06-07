#include <iostream>

using namespace std;

char ch;

class date {
private:
    int day;
    int month;
    int year;
public:
    void  getdate();
    void showdate();
};
void date:: getdate() {
    cout << "Enter the date the employee was hired (dd/mm/yy): ";
    cin >> day >> ch>> month >> ch >>  year;
}
void date:: showdate(){
    cout << "Еhe date employee was hired: ";
    cout << day << "/" << month << "/" <<  year << endl;
}

int main(int argc, const char * argv[]) {
    
    date n1, n2, n3;
    
    n1.getdate();
    n2.getdate();
    n3.getdate();
    
    n1.showdate();
    n2.showdate();
    n3.showdate();
    
    cout << endl;
    return 0;
}
