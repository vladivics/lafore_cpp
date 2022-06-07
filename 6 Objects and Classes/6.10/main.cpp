#include <iostream>

using namespace std;

class order{
    private:
        int static number;
        int n;
    public:
        order() {
            number++;
            n = number;
        }
        int setfunc() {return n;}
    };
int order::number = 0;

class ship {
private:
int grad;
double mins;
char ugl;
    
public:
    order ord;
    ship (): grad(0), mins(0.0), ugl('s') {}
    ship (int g, double m, char u): grad(g), mins(m), ugl(u) {}
        
    void getk() {
        cout << "Enter the coordinates: ";
        cout << "\nMraducies: "; cin >> grad;
        cout << "Minutes: "; cin >> mins;
        cout << "Direction: "; cin >> ugl;
    }
    
    void setk() {
        cout << "Ship number: " << ord.setfunc();
        cout << "\nKoordinaty: ";
        if (ugl == 'S' || ugl == 'N')
        {cout << "Shirota: ";}
        else cout << "Dolgota: ";
        cout  << grad << " " << mins << " " << ugl << endl;
    }
};



int main(int argc, const char * argv[]) {
    
    ship D(149, 34.8, 'W');
    ship S;
    S.getk();
    cout << endl;
    D.setk();
    S.setk();
    cout << endl;
    return 0;
}


