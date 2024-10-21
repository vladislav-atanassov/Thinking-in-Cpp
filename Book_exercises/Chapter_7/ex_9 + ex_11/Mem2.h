#ifndef MEM2_H
#define MEM2_H

typedef unsigned char byte;

class Mem
{
public:
    Mem(int sz = 0);
    ~Mem();

    int msize();
    byte* pointer(int minSize = 0);
    bool moved();

private:
    byte* mem;
    byte* initialAlloc;
    int size;

    void ensureMinSize(int minSize);
};

#endif // MEM2_H