#include <iostream> 

using namespace std;

int main () {

  //loops through all numbers from 19 to 65
  for (int i = 19; i <= 65; i++) {

    //if statement allows for 46 to be skipped
    if (i == 46) {
      continue;
    } else {
      cout << i << endl;
    }
  }
}