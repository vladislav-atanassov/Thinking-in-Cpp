//: C10:StaticDestructors.cpp
// Static object destructors
#include <fstream>
using namespace std;

ofstream out("statdest.out"); // Trace file

class Obj 
{
private:
    char c; // Identifier

public:
    Obj(char cc) : c(cc) {
        out << "Obj::Obj() for " << c << endl;
    }

    ~Obj() {
        out << "Obj::~Obj() for " << c << endl;
    }
};

Obj a('a'); // Global (static storage)

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