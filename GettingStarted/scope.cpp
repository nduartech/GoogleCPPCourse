// scope.cpp, Nathan Duarte
// Description: A program to illustrate different scopes

#include <iostream>
using namespace std;

// The following 2 variables are global, that is, they
// are available inside any function in the program.
// If there is a local variable of the same name (either
// a or b) in a function, then the local variable overrides.
// the global.  It is typically not a good idea to use
// global variables, as they can be hard to track.
int a = 18;
int b = 6;

// This function assigns "a" and "b" to the incoming parameters.
// Notice that the local value of b in main is passed in as a,
// and the global value of a is passed in as b.
int function1(int a, int b) {
  return a - b;
}

// This function adds the two global variables, a and b together
// and assigns the sum to a local variable c.  This value is
// returned.  The c variable is no longer available once this
// function has completed its execution.
int function2() {
  int c;
  c = a + b;
  return c;
}

int main (void) {
  // We override the global value of b in this function with
  // this local variable,
  int b = 12;
  // We initialize a variable called c, which is different from
  // the one declared in function 2().
  int c = 0;
  // The global variable a is assigned 12 - 18 = -6 in the next
  // line.
  a = function1(b, a);
  // The local variable c is assigned the sum of the two global
  // variables.  Note that the previous line modified the global
  // variable a, which now equals -6.  Thus, c has the value of
  // -6 + 6 = 0.
  c = function2();
  // We print the value of the global variable a (-6), the local
  // value of b (12), and the local value of c (0).
  cout << "a: " << a << "  b: " << b << "  c: " << c << endl;
}