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

  cout << a;

  if (a.isFull()) {
    cout << "Stack A is full!";
  }

  cout << "Stack A length: " << a.getLength();
  cout << "Stack B length: " << b.getLength();

  try {
    a.push(12);
  }
  catch (string e) {
    cout << e;
  }

  cout << "Popping 9 from stack B";
  b.pop();

  cout << "Popping 8 from stack B";
  b.pop();

  cout << "Popping 7 from stack B";
  b.pop();

  cout << "Popping 6 from stack B";
  b.pop();

  cout << "Popping 5 from stack B";
  b.pop();

  cout << "Stack B length: " << b.getLength();

  b.clear();

  cout << "Stack B is now empty after being cleared";

  try {
    b.pop();
  }
  catch (string e) {
    cout << e;
  }

  try {
    b.peek();
  }
  catch (string e) {
    cout << e;
  }

  c = a;  

  cout << "Stack A length: " << a.getLength();
  cout << "Stack C length: " << c.getLength();

  return 0;
}