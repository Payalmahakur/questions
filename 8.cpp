#include <iostream>
using namespace std;
  int main() {
     char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if (ch =='a'|| ch =='A'||ch =='e'|| ch == 'E'||ch == 'i'||ch =='I'||ch =='o'||ch =='O'||ch =='u'|| ch =='U') {
        cout << ch <<" is a vowel "<< endl;
     } else if ((ch >='A' && ch <='Z' ) ||(ch >='a' && ch <='z' )) {
        cout << ch <<" is a consonants "<< endl;
    }
        return 0;

  }