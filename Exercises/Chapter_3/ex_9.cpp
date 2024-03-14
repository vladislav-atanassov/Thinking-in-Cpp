//: C03:Static.cpp 
// Using a static variable in a function 
#include <iostream> 
using namespace std; 
 
void func() { 
  static int i = 0; 
  cout << "i = " << ++i << endl; 
} 
 
// Running the file eith the keyword static 
// produces an incremented result for i every iterarion of the for loop
// without it the variable is created over and over again with the same value
// of 0 and increments to 1 and that happens every itetarion of the for loop 

int main() { 
  for(int x = 0; x < 10; x++) 
    func(); 
} ///:~ 