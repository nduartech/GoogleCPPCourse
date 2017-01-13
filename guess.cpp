// guess.cpp.  Nathan Duarte
// Description: A guessing game where the player guesses
// the secret number.

#include <iostream>
#include <time.h>
#include <cstdlib.h>
using namespace std;

int main () {
  int random_number, guess;

  // Initialize random seed.
  srand (time(NULL));

  // Generate random number between 1 and 100
  random_number = rand() % 100 + 1;

  cout << "Guess our number (1 to 100) ";
  do {
    if (!(cin >> guess)) {
      cout << "Please enter only numbers" << endl;
    } else {
      if (random_number < guess) cout << "The secret number is lower than " << guess << endl;
      else if (random_number > guess) cout << "The secret number is higher than " << guess << endl;
    }
  } while (random_number != guess);
  cout << "Congratulations!" <<  endl;
  return 0;
}