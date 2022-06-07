#include <iostream>

using namespace std;


enum etype {laborer=1, secretary, manager, accountant, executive, researcher};


struct date {
    int month, day, year;
};


struct employee {
    int num;
    double com;
    etype type;
    date dat;
};


int main(int argc, const char * argv[]) {
    
    employee w1, w2, w3;
    char ch, t;
    
    cout <<"Enter the first employee details: ";
        cout <<"\nEnter employee number: ";
        cin >> w1.num;
        cout <<"Enter employee compensation: ";
        cin >> w1.com;
        cout << "Enter employee type(l, s, m, a, e, r): ";
        cin >> ch;
    switch(ch) {
            case 'l':
                w1.type = laborer;
                break;

            case 's':
                w1.type = secretary;
                break;

            case 'm':
                w1.type = manager;
                break;

            case 'a':
                w1.type = accountant;
                break;

            case 'e':
                w1.type = executive;
                break;

            case 'r':
                w1.type = researcher;
                break;

            default:
                cout <<"Invalid Input!";
        }
    cout << "Enter date of first employment (DD.MM.YY): ";
    cin >> w1.dat.month >> t >> w1.dat.day >> t >> w1.dat.year;
    
    
    
    cout <<"\nEnter the second employee details: ";
        cout <<"\nEnter employee number: ";
        cin >> w2.num;
        cout <<"Enter employee compensation: ";
        cin >> w2.com;
        cout << "Enter employee type(l, s, m, a, e, r): ";
        cin >> ch;
    switch(ch) {
            case 'l':
                w2.type = laborer;
                break;

            case 's':
                w2.type = secretary;
                break;

            case 'm':
                w2.type = manager;
                break;

            case 'a':
                w2.type = accountant;
                break;

            case 'e':
                w2.type = executive;
                break;

            case 'r':
                w2.type = researcher;
                break;

            default:
                cout <<"Invalid Input!";
        }
    cout << "Enter date of second employment (DD.MM.YY): ";
    cin >> w2.dat.month >> t >> w2.dat.day >> t >> w2.dat.year;
    
    
    
    cout <<"\nEnter the third employee details: ";
        cout <<"\nEnter employee number: ";
        cin >> w3.num;
        cout <<"Enter employee compensation: ";
        cin >> w3.com;
        cout << "Enter employee type(l, s, m, a, e, r): ";
        cin >> ch;
    switch(ch) {
            case 'l':
                w3.type = laborer;
                break;

            case 's':
                w3.type = secretary;
                break;

            case 'm':
                w3.type = manager;
                break;

            case 'a':
                w3.type = accountant;
                break;

            case 'e':
                w3.type = executive;
                break;

            case 'r':
                w3.type = researcher;
                break;

            default:
                cout <<"Invalid Input!";
        }
    cout << "Enter date of third employment (DD.MM.YY): ";
    cin >> w3.dat.month >> t >> w3.dat.day >> t >> w3.dat.year;
    
    cout << "What employee's data you need to find out? \n";
    int n;
    cin >> n;
    char var;
    
    do
    {
    switch (n) {
        case 1:
            cout << w1.num<< endl;
            cout << w1.com<< endl;
            cout << w1.type<< endl;
            cout << w1.dat.month << "." << w1.dat.day << "." << w1.dat.year<<endl;
            break;
            
        case 2:
            cout << w2.num<<endl;
            cout << w2.com<<endl;
            cout << w2.type<<endl;
            cout << w2.dat.month << "." << w2.dat.day << "." << w2.dat.year<<endl;
            break;
            
        case 3:
            cout << w3.num<<endl;
            cout << w3.com<<endl;
            cout << w3.type<<endl;
            cout << w3.dat.month << "." << w3.dat.day << "." << w3.dat.year<<endl;
            break;
            
        default:
            cout << "An employee with this number does not exist :( "<<endl;
            break;
    }
        
        cout << "Find out the details of another employee (y/n): ";
        cin >> var;
        
    } while (var == 'y');
    
    return 0;
    
}
