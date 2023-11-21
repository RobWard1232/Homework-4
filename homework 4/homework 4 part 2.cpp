#include <iostream>

using namespace std;

int main () {
    bool loop = true;

  // count counts through the loop with the numbers in order to order the numbers by there variables.
  int count = 0;

  //declares all ints needed
  float a, b, c, d;

  while (loop == true) {
    cout << "input the numbers and once you put in the correct amount of numbers it will calculate: ";
        
    if (count == 0) {
      cout << "first number: ";
      cin >> a;
      count++;
    } else if (count == 1) {
      cout << "second number: ";
      cin >> b;
      count++;
    } else if (count == 2) {
      cout << "third number: ";
      cin >> c;
      count++;
    } else if (count == 3) {
      cout << "fourth number: ";
      cin >> d;
      count = 0;

      //sum---------
      cout << "sum: " << a + b + c + d << endl;

      //average-----
      cout << "average: " << (a + b + c + d) / 4 << endl;
    }
  }
}