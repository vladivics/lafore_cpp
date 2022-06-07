//
//  main.cpp
//  7.9
//
//  Created by Vladimir Sevastyanov on 5/26/22.
//

#include <iostream>
using namespace std;

class Queue{ // FIFO
private:
    static const int n = 10;
    int array[n];
    int head;
    int tail;
public:
    Queue() {
        for (int i = 0; i < n; ++i){
            array[i] = 0;
        }
        head = 0;
        tail = 0;
    }
    void put(int);
    int get();
};

int main(int argc, const char * argv[]) {
    
    Queue q;
        q.put(11);
        q.put(22);
        cout << "1: " << q.get() << endl;
        cout << "2: " << q.get() << endl;
        q.put(33);
        q.put(44);
        q.put(55);
        q.put(66);
        cout << "3: " << q.get() << endl;
        cout << "4: " << q.get() << endl;
        cout << "5: " << q.get() << endl;
        cout << "6: " << q.get() << endl;
        return 0;
}

void  Queue::put(int i){ // push
    array[tail++] = i;
    if (tail == n - 1)
        tail = 0;
        
}

int Queue::get(){ // pop
    if (head == n - 1)
        head = 0;
    return array[head++];
    
}

