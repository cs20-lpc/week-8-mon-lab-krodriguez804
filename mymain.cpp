// Krystle Dao Week 8 Monday Lab

/*
'Output does not match expected: 
0 1 2 3 4 5 6 7 8 9 Stack A is full! 
Stack A length: 10
Stack B length: 10
push: error, stack is full, avoiding 
overflow
Popping 9 from stack B
Popping 8 from stack B
Popping 7 from stack B
Popping 6 from stack B
Popping 5 from stack B
Stack B length: 5
Stack B is now empty after being cleared
pop: error, stack is empty, avoiding underflow
peek: error, stack is empty, cannot access the top
Stack A length: 10
Stack C length: 10
*/
#include <iostream>
#include <string>
#include "ArrayStack.hpp"

using namespace std;

int main() {

    ArrayStack<int> i(3);
    
    cout << "Max size: " << i.getMaxSize() << endl;

    i.push(742);
    i.push(461);
    i.push(726);

    cout << "Length: " << i.getLength() << endl;
    cout << "Empty? " << i.isEmpty() << endl;
    cout << "Full? " << i.isFull() << endl;

    cout << "Peek: " << i.peek() << endl;
    
    i.pop();
    
    cout << "Stack after pop: " << i << endl;
    
    i.clear();
    
    cout << "Stack after clear: " <<  i << endl;

    ArrayStack<string> s(3);
    
    cout << "Max size: " << s.getMaxSize() << endl;

    s.push("hello");
    s.push("hi");
    s.push("hey");

    cout << "Length: " << s.getLength() << endl;
    cout << "Empty? " << s.isEmpty() << endl;
    cout << "Full? " << s.isFull() << endl;

    cout << "Peek: " << s.peek() << endl;
    
    s.pop();
    
    cout << "Stack after pop: " << s << endl;
    
    s.clear();
    
    cout << "Stack after clear: " <<  s << endl;

    ArrayStack<double> d(3);
    
    cout << "Max size: " << d.getMaxSize() << endl;

    d.push(742.21);
    d.push(461.256);
    d.push(726.781);

    cout << "Length: " << d.getLength() << endl;
    cout << "Empty? " << d.isEmpty() << endl;
    cout << "Full? " << d.isFull() << endl;

    cout << "Peek: " << d.peek() << endl;
    
    d.pop();
    
    cout << "Stack after pop: " << d << endl;
    
    d.clear();
    
    cout << "Stack after clear: " << d << endl;

    ArrayStack<char> c(3);
    
    cout << "Max size: " << c.getMaxSize() << endl;

    c.push('a');
    c.push('b');
    c.push('c');

    cout << "Length: " << c.getLength() << endl;
    cout << "Empty? " << c.isEmpty() << endl;
    cout << "Full? " << c.isFull() << endl;

    cout << "Peek: " << c.peek() << endl;
    
    c.pop();
    
    cout << "Stack after pop: " << c << endl;
    
    c.clear();
    
    cout << "Stack after clear: " <<  c << endl;

    return 0;
}

/*
  //  i.rotate(LEFT);
*/