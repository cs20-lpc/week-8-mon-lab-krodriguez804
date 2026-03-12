// Krystle Dao Week 8 Monday Lab

#include <iostream>
#include <string>
#include "ArrayStack.hpp"

using namespace std;

int main() {

  ArrayStack<int> a(10);
  ArrayStack<int> b(a);
  ArrayStack<int> c(10);

  a.push(0);
  a.push(1);
  a.push(2);
  a.push(3);
  a.push(4);
  a.push(5);
  a.push(6);
  a.push(7);
  a.push(8);
  a.push(9);

  cout << a << endl;

  if (a.isFull()) {
    cout << "Stack A is full!" << endl;
  }

  cout << "Stack A length: " << a.getLength() << endl;
  cout << "Stack B length: " << b.getLength() << endl;

  try {
    a.push(12);
  }
  catch (string e) {
    cout << e << endl;
  }

  b.pop();
  cout << "Popping 9 from stack B" << endl;

  b.pop();
  cout << "Popping 8 from stack B" << endl;
    
  b.pop();
  cout << "Popping 7 from stack B" << endl;
    
  b.pop();
  cout << "Popping 6 from stack B" << endl;
    
  b.pop();
  cout << "Popping 5 from stack B" << endl;
    
  cout << "Stack B length: " << b.getLength() << endl;

  b.clear();

  cout << "Stack B is now empty after being cleared" << endl;

  try {
    b.pop();
  }
  catch (string e) {
    cout << e << endl;
  }

  try {
    b.peek();
  }
  catch (string e) {
    cout << e << endl;
  }
 
  cout << "Stack A length: " << a.getLength() << endl;
  cout << "Stack C length: " << c.getLength() << endl;

    return 0;
}

/*
    //  i.rotate(LEFT);
*/