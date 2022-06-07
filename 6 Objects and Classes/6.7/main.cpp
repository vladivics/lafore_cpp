#include <iostream>

using namespace std;

class angle {
private:
    int grad;
    double mins;
    char ugl;
public:
    angle (): grad(0), mins(0.0), ugl('s') {}
    angle (int g, double m, char u): grad(g), mins(m), ugl(u) {}
        
    void getk() {
        cout << "Enter the coordinates: ";
        cout << "\nMraducies: "; cin >> grad;
        cout << "Minutes: "; cin >> mins;
        cout << "Direction: "; cin >> ugl;
    }
    
    void setk() const {
        cout << "\nKoordinaty: ";
        if (ugl == 'S' || ugl == 'N')
        {cout << "Shirota: ";}
        else cout << "Dolgota: ";
        cout  << grad << " " << mins << " " << ugl << endl;
    }
};

int main(int argc, const char * argv[]) {
    
    angle D(149, 34.8, 'W');
    angle S;
    char ch;
    do{
        S.getk();
        cout <<"repear (y/n): ";
        cin >> ch;
    } while (ch =='y');
    
    D.setk();
    S.setk();
    cout << endl;
    return 0;
}
