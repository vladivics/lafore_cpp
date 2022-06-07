#include <iostream>

using namespace std;

class tollBooth{
    
private:
    unsigned int carCounter;
    double sum;

public:
    tollBooth(): carCounter(0), sum(0.0)
    {}
    
    void payingCar(){
        carCounter++;
        sum += 0.5;
    }
    
    void nopayCar(){
        carCounter++;
    }
    
    void display () const{
        cout << "\nNumber of passing cars: " << carCounter << endl;
        cout << "Total revenues: " << sum << endl;
    }
    
};

int main(int argc, const char * argv[]) {
    
    tollBooth tollbooth;
    
    char ch, q;
    
    do {
        cout << "\nYou are driving on a toll road";
        cout << "\nPlease pay the fare";
        cout << "\n(p (PAY)/n (NO PAY)): ";
        cin >> ch;
        
        switch (ch)
        {
            case 'p':
                tollbooth.payingCar();
                break;
                
            case 'n':
                tollbooth.nopayCar();
                break;
                
            default: cout << "\nError" << endl;
                break;
        }
        cout << "\nDo you want to continue driving simulation (y/n): ";
        cin >> q;
    } while (q == 'y');
    
    tollbooth.display();
    
    cout << endl;
    return 0;
}
