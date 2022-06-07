#include <iostream>

using namespace std;

class times{
public:
    int hrs;
    int mins;
    int secs;
public:
    times(): hrs(0), mins(0), secs(0) {}
    times(int h, int m, int s): hrs(h), mins(m), secs(s) {}
    
    void sum(times t1, times t2)
    {
        secs = t1.secs + t2.secs;
            if(secs > 59)
            {
                secs -= 60;
                mins++;
            }
        mins = t1.mins + t2.mins;
            if(mins > 59)
            {
                mins -= 60;
                hrs++;
            }
        hrs = t1.hrs + t2.hrs;
    }
    void show() const {
        cout << hrs << ":" << mins << ":" << secs << endl;
    }
    
};

int main(int argc, const char * argv[]) {
    
    char ch;
    times t2, t3;
    times t1(2, 30, 16);
    
    cout << "Enter second time (HH:MM:SS): ";
    cin >> t2.hrs >> ch >> t2.mins >> ch >> t2.secs;
    
    t3.sum(t1, t2);
    cout << "\nFirst time: "; t1.show();
    cout << "Second time: "; t2.show();
    cout << "\nSum is "; t3.show();
    
    return 0;
}

