//: C06:Nojump.cpp
// Can't jump past constructors
class X 
{
public:
    X();
};

X::X() {}

void f(int i) 
{
    if(i < 10) 
    {
    //! goto jump1; // Error: goto bypasses init
    }
    X x1; // Constructor called here
    jump1:
    switch(i) 
    {
        case 1 :
            X x2; // Constructor called here
        break;
            //! case 2 : // Error: case bypasses init
            X x3; // Constructor called here
        break;
    }
}

int main() 
{
    f(9);
    f(11);
}///:~

/*
jumpInstr.cpp: In function 'void f(int)':
jumpInstr.cpp:18:5: error: jump to label 'jump1'
   18 |     jump1:
      |     ^~~~~
jumpInstr.cpp:15:10: note:   from here
   15 |     goto jump1; // Error: goto bypasses init
      |          ^~~~~
jumpInstr.cpp:17:7: note:   crosses initialization of 'X x1'
   17 |     X x1; // Constructor called here
      |       ^~
*/