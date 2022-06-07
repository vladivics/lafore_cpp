#include <iostream>
using namespace std;

int k = 0;

void def(){
    k++;
}

int fed (){
    static int l = 0;
    l++;
    return l;
}

int main(int argc, const char * argv[]) {
    
    char ch = '/';
    
    do{
        def();
      cout << "Do you want to continue (y/n): ";
                cin >> ch;
    }
    while (ch == 'y');
    cout << "The function def() continue " << k << " time"<<endl;
    
    for (int i=0; i<15; i++)
    {
       fed();
    }
    
    int l = fed ();
    cout << "The function fed() continue " << l << " time"<<endl;
    
    return 0;
}
