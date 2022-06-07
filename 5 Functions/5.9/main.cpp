#include <iostream>

using namespace std;

struct times
{
    int hrs, mins, secs;
};


void swap (times&, times&);


int main()
{
    times time1, time2;
    char t = 't';
    
    cout << "Enter vars first time (HH:MM:SS): ";
    cin >> time1.hrs >> t >> time1.mins >> t >> time1.secs;
    
    cout << "Enter vars second time (HH:MM:SS): ";
    cin >> time2.hrs >> t >> time2.mins >> t >> time2.secs;
    
    swap (time1, time2);
    
    cout << time1.hrs << t << time1.mins << t << time1.secs << endl;
    cout << time2.hrs << t << time2.mins << t << time2.secs << endl;
    

    return 0;
}

void swap (times& time1, times& time2)
{
    int t = time1.hrs;
    time1.hrs = time2.hrs;
    time2.hrs = t;
    
    int t1 = time1.mins;
    time1.mins = time2.mins;
    time2.mins = t1;
    
    int t2 = time1.secs;
    time1.secs = time2.secs;
    time2.secs = t2;
}
