#include <iostream>
using namespace std;
 int main() {
      int dividend,divisior,quotient,remainder;
      cout << "Enter dividend: ";
      cin >> dividend;
      cout << "Enter divisor: ";
      cin >> divisior;
      quotient = dividend / divisior;
      remainder = dividend % divisior;
      cout << quotient << endl;
      cout << remainder << endl;
      return 0;
 }