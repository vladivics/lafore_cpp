//
//  main.cpp
//  8.10
//
//  Created by Vladimir Sevastyanov on 6/14/22.
//

#include <iostream>
#include <cmath>
#include <iso646.h>
using namespace std;

const double PI = 3.141592653589793238463;

struct translate{
    double _x;
    double _y;
};

class Rectangular{
public:
    double x;
    double y;
public:
    Rectangular(): x(0.0), y(0.0) {}
    Rectangular(double i, double j): x(i), y(j) {}
    
    Rectangular operator+(Rectangular v) const{
        double _x = x + v.x;
        double _y = y + v.y;
        return Rectangular (_x, _y);
    }
    
    operator translate(){
        translate t;
        t._x = x;
        t._y = y;
        return t;
    }
};

class Polar{
public:
    double radius;
    double angle;
public:
    Polar(): radius(0.0), angle(0.0) { }

    void get(){
        cout << "Enter radius: ";
        cin >> radius;
        if (radius < 0){
            cout << "Error! Perhaps your radius < 0" << endl;
            exit(0);
        }
            
        char dr;
        cout << "Do you want to enter angles in degrees or radians? (d/r): ";
        cin >> dr;
            switch (dr) {
                case 'r':
                    cin >> angle;
                    break;
                case 'd':
                    int d;
                    cin >> d;
                    angle = d * PI / 180;
                    break;
                default: cout << "Error of entering :(" << endl;
                    exit(1);
                    break;
            }
    }
    
    void set(){
        cout << "The sum of the polar coordinates is ";
        cout << "(" << radius << ":" << angle << ")" << endl;
    }
    
    operator Rectangular() const;
    
    void from_trans(translate t){
        radius  = sqrt(t._x * t._x + t._y * t._y);
        angle = atan2(t._y, t._x);
    }
  
};

Polar::operator Rectangular() const{
    double _x = radius * cos(angle);
    double _y = radius * sin(angle);
    return Rectangular(_x, _y);
}
    
int main(int argc, const char * argv[]) {
    char ch;
    do{
        Polar p1, p2, p;
        Rectangular r1, r2, r;
        translate t;
        p1.get();
        p2.get();
        
        r1 = p1;
        cout << endl << r1.x << " " << r1.y << endl;
        r2 = p2;
        cout << endl << r2.x << " " << r2.y << endl;
        r = r1 + r2;
        
        t = r;
        cout << endl << t._x << " " << t._y << endl;
        p.from_trans(t);
        
        p.set();
       
        cout << "\nDo you want to coninue? (y/n): ";
        cin >> ch;
        cout << endl;
         
     } while (ch != 'n');
    
    return 0;
}
