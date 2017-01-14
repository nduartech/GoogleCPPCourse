// random.cpp.  Nathan Duarte
// Description: Illustrates how to generate a random number in C++

#include <iostream>
#include <time.h>
using namespace std;

int main () {
  int random_number;

  // Initialize random seed.
  srand (time(NULL));

  // Generate random number between 1 and 100
  random_number = rand() % 100 + 1;

  cout << "Your random number:" << random_number << endl;
}