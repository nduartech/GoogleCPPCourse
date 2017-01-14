// chirp_temperature.cpp: Nathan Duarte
// Description:  implementation of a fancy card trick in C++

#include <iostream>
#include <iomanip>
using namespace std;

int main () {
  int a, b, c, x, y, z, r, s, t;
  cout << "Please enter a three digit number: " << endl;
  // The following line accepts input from the keyboard into
  // variable a.
  // cin returns false if an input operation fails, that is, if
  // something other than an int (the type of a) is entered.
  if (!(cin >> a)) {
    cout << "You entered a non-numeric. Exiting..." << endl;
    return -1;
    // exit and ideally throw an error
  }
  b = (a - a/100*100)*10 + a/100;
  c = a%10*100 + a/10;
  x = a%11;
  y = b%11;
  z = c%11;
  r = x+y;
  s = y+z;
  t = z+x;
  if(r==9) {
    cout << r << " Error!" << endl;
    return -1;
  }
  if(s==9) {
    cout << s << " Error!" << endl;
    return -1;
  }
  if(t==9) {
    cout << t << " Error!" << endl;
    return -1;
  }
  if(r%2==1) {
    if(r+11==20) {
      r-=11;
    }
    else {
      r+=11;
    }
  }
  if(s%2==1) {
    if(s+11==20) {
      s-=11;
    }
    else {
      s+=11;
    }
  }
  if(t%2==1) {
    if(t+11==20) {
      t-=11;
    }
    else {
      t+=11;
    } 
  }
  r/=2;
  s/=2;
  t/=2;
  cout << r << s <<  t << endl;
}