#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, const char * argv[])
{
    cout<<setiosflags(ios::left)<<setw(20)<<"Second name"<<setw(20)<<"First name"<<setw(20)<<"Adress"<<setw(15)<<"city"<<endl;

    cout<<setw(75)<<setfill('-')<<"-"<<endl;

    cout<<setfill(' ')<<setw(20)<<"Petrov"<<setw(20)<<"Vasiliy"<<setw(20)<<"Street 1"<<setw(15)<<"Saint Petersburg"<< endl;

    cout<<setw(20)<<"Ivanov"<<setw(20)<<"Sergey"<<setw(20)<<
        "Street 2"<<setw(15)<<"Sarov"<<endl;

    cout<<setw(20)<<"Sidorov"<<setw(20)<<"Ivan"<<setw(20)<<
        "Berezovaya 21"<<setw(15)<<"Moscow"<<endl;

return 0;
}
