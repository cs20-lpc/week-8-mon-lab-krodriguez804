// Krystle Dao Week 8 Monday Lab

#include <iostream>
#include <string>
#include "ArrayStack.hpp"

using namespace std;

int main() {

  ArrayStack<int> a(10);

  for(int i = 0; i < 10; i++) {
    a.push(i);
  }

  ArrayStack<int> b(a);   
  ArrayStack<int> c(10);

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

  cout << "Popping 9 from stack B" << endl;
  b.pop();

  cout << "Popping 8 from stack B" << endl;
  b.pop();

  cout << "Popping 7 from stack B" << endl;
  b.pop();

  cout << "Popping 6 from stack B" << endl;
  b.pop();

  cout << "Popping 5 from stack B" << endl;
  b.pop();

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

  c = a;  

  cout << "Stack A length: " << a.getLength() << endl;
  cout << "Stack C length: " << c.getLength() << endl;

  return 0;
}