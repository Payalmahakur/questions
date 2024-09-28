#include <iostream>
using namespace std;
int main() {
     int a,b,c,max;
     cout << "Enter first value: ";
     cin>>a;cout << "Enter second value: ";
     cin>>b;
     cout << "Enter thrid value: ";
     cin>>c;
     max=a;
     if(b>max)
     max=b;
     if(c>max)
     max=c;
     cout<<"the maximum value : "<< max<<endl;


   return 0; 
}