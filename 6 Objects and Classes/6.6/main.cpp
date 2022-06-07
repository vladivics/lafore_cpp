#include <iostream>

using namespace std;

class employee {
private:
    int number;
    float pay;
public:
    enum etype {laborer, secretary, manager};

    class date {
            private:
                int day;
                int month;
                int year;
                char ch;
            public:
                void getdate() {
                    cout << "Enter the date the employee was hired (dd/mm/yy): ";
                    cin >> day >> ch >> month >> ch >>  year;
                    }
        
                void showdate(){
                    cout << "\nThe date employee was hired: ";
                    cout << day << "/" << month << "/" <<  year << endl;
                    }
                };

public:
    date dates;
    etype type;
    char p;
    void getemployee(){
        cout << "\nEnter employee's number: "; cin >> number;
        cout << "Enter " << number << " employee pay: "; cin >> pay;
        cout << "Enter employee's position: laborer, secretary, manager (l, s, m): ";
        cin >> p;
        switch (p) {
            case 'l':
                type = laborer; break;
            case 's':
                type = secretary; break;
            case 'm':
                type = manager; break;
            default:
                break;
        }
        dates.getdate();
    }
    void showemployee(){
        cout << "\nEmployee information number " << number << ":" << endl;
        cout << "The salary: " << pay << endl;
        switch (type) {
            case laborer:
                 cout << "Employee's position is laborer"; break;
            case secretary:
                cout<< "Employee's position is secretary"; break;
            case manager:
                cout << "Employee's position is manager"; break;
            default:
                break;
        }
        dates.showdate();
        cout << endl;
    }
};


int main(int argc, const char * argv[]) {
    
    employee n1, n2, n3;
    cout << "Provide employee information: ";
    n1.getemployee();
    n1.showemployee();
    n2.getemployee();
    n2.showemployee();
    n3.getemployee();
    n3.showemployee();
    return 0;
}



