#include <iostream>
using namespace std;

int main(int argc, const char * argv[]){
    
    
    struct time {
        int hours, minutes, seconds;
    };
    
    
    time part1;
    char temp;
    
    cout << "Enter time in format (HH:MM:SS): ";
    cin >> part1.hours >> temp >> part1.minutes >> temp >> part1.seconds;
    
    int totalsecs = part1.hours*3600 + part1.minutes*60 + part1.seconds;
    
    cout << "Total  time in seconds: " << totalsecs << endl;
    
    return 0;
}
