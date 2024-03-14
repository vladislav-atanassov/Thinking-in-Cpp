#include <iostream> 
using namespace std; 
 
int dog;
char cat;
double bird;
string fish; 
 
template <class T>
void f(const T& pet) { 
  cout << "pet id number: " << pet << endl; 
} 
 
int main() { 
  int i, j, k; 
  cout << "f()<int>: " << &f<int> << endl; 
  cout << "f()<double>: " << &f<double> << endl; 
  cout << "dog: " << &dog << endl; 
  cout << "cat: " << &cat << endl; 
  cout << "bird: " << &bird << endl; 
  cout << "fish: " << &fish << endl; 
  cout << "i: " << &i << endl; 
  cout << "j: " << &j << endl; 
  cout << "k: " << &k << endl; 
} 