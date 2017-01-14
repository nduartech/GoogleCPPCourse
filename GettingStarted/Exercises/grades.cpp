// grades.cpp, Nathan Duarte
// Description: compute your final grade for a programming course you are taking

#include <iostream>
using namespace std;

int main () {
  int assign1, assign2, assign3, assign4, midterm, final, participation;
  cout << "Enter the score for the first assignment. " << endl;
  if (!(cin >> assign1)) {
    cout << "That's not a valid grade." << endl;
    return 0;
  }
  cout << "Enter the score for the second assignment. " << endl;
  if (!(cin >> assign2)) {
    cout << "That's not a valid grade." << endl;
    return 0;
  }
  cout << "Enter the score for the third assignment. " << endl;
  if (!(cin >> assign3)) {
    cout << "That's not a valid grade." << endl;
    return 0;
  }
  cout << "Enter the score for the fourth assignment. " << endl;
  if (!(cin >> assign4)) {
    cout << "That's not a valid grade." << endl;
    return 0;
  }
  cout << "Enter the score for the midterm. " << endl;
  if (!(cin >> midterm)) {
    cout << "That's not a valid grade." << endl;
    return 0;
  }
  cout << "Enter the score for the final. " << endl;
  if (!(cin >> final)) {
    cout << "That's not a valid grade." << endl;
    return 0;
  }
  cout << "Enter the score for the section grade. " << endl;
  if (!(cin >> participation)) {
    cout << "That's not a valid grade." << endl;
    return 0;
  }
  cout << "The final grade is: " << ((assign1+assign2+assign3+assign4)/4)*0.4 + midterm*0.15 + final*0.35 + participation*0.1 << endl;
}