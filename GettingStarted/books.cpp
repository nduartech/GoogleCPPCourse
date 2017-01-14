// animal.cpp.  Nathan Duarte
// Description: Computes permutations of books on a shelf

#include <iostream>
using namespace std;

int main () {
  int permutations=1;

  for(int i=6;i>0;i--)
    permutations *= i;
   cout << "There are " << permutations << " ways to order 6 different books, left to right, on a shelf."  << endl;

}