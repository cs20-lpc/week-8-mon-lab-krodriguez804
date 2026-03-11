// Krystle Dao Week 8 Monday Lab

#include <iostream>
#include "ArrayStack.hpp"

using namespace std;

int main() {

    ArrayStack<int> i(3);
    
    cout << "Max size: " << i.getMaxSize() << endl;
    cout << "Length: " << i.getLength() << endl;
    cout << "Empty? " << i.isEmpty() << endl;
    cout << "Full? " << i.isFull() << endl;

    i.push(742);
    i.push(461);
    i.push(726);

    cout << i.peek() << endl;
    
    i.pop();
    
    cout << i << endl;
    
    
    
    cout << i << endl;

    i.rotate(LEFT);

    i.clear();
    i.getLength();

















    return 0;
}