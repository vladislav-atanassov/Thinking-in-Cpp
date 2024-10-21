#include <cstring>
#include "Mem2.h"

Mem::Mem(int minSize)
{
    mem = 0;
    initialAlloc = mem;
    size = 0;
    
    ensureMinSize(minSize);
}

Mem::~Mem()
{
    delete[] mem;
}

int Mem::msize()
{
    return size;
}

void Mem::ensureMinSize(int minSize)
{
    if(minSize > size)
    {
        byte *newmem = new byte[minSize];
        memset(newmem + size, 0, minSize - size);
        memcpy(newmem, mem, size);

        delete[] mem;

        mem = newmem;
        size = minSize;
    }
}

byte* Mem::pointer(int minSize)
{
    ensureMinSize(minSize);

    return mem;
}

bool Mem::moved()
{
    return (mem != initialAlloc);
}