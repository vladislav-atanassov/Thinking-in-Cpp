//: C10:StaticDestructors.cpp
// Static object destructors
#include <fstream>
using namespace std;

extern ofstream out; // Trace file

class Obj 
{
private:
    char c; // Identifier

public:
    Obj(char cc) : c(cc) { out << "Obj::Obj() for " << c << endl; }
    ~Obj() { out << "Obj::~Obj() for " << c << endl; }

};

Obj a('a'); // Global (static storage)

ofstream out("statdest.out");

// Constructor & destructor always called
void f() 
{
    static Obj b('b');
}

void g() 
{
    static Obj c('c');
}

int main() 
{
    out << "inside main()" << endl;

    f();
    g();

    out << "leaving main()" << endl;
}

// No errors were logged but the exit code of the program
// when using echo $? is False