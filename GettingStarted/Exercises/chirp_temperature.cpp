// chirp_temperature.cpp: Nathan Duarte
// Description:  a program that takes as input the number of chirps in a minute
//  and prints the current temperature

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int chirps = 0;
  // Prompt the user for the number of chirps
  cout << "Please enter the number of chirps you hear per minute: ";
  // The following line accepts input from the keyboard into
  // variable chirps.
  // cin returns false if an input operation fails, that is, if
  // something other than an int (the type of chirps) is entered.
  if (!(cin >> chirps)) {
    cout << "You entered a non-numeric. Exiting..." << endl;
    return -1;
    // exit and ideally throw an error
  }
  // Used to make sure that the temperature is printed with one decimal place
  cout << fixed;
  cout << setprecision(1);
  cout << "Number of chirps: " << chirps << endl;
  cout << "The temperature is: " << (chirps+40.0)/4.0 << " degrees." << endl;
  return 0;
}