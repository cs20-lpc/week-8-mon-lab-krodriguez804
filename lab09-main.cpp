// Krystle Dao Week 8 Monday Lab

#include <iostream>
#include <string>
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

    cout << "Peek: " << i.peek() << endl;
    
    i.pop();
    
    cout << "Stack after pop: " << i << endl;
    
    i.clear();
    
    cout << "Stack after clear: " <<  i << endl;

    return 0;
}

/*
  //  i.rotate(LEFT);

    // i.clear();
   // cout << "Length after clear: " << i.getLength() << endl;
*/