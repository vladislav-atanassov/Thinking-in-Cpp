#ifndef EX_33_H
#define EX_33_H

class VPTRLookUp
{
public:
    int data;

    VPTRLookUp() {};
    VPTRLookUp(int d) : data(d) {}
    ~VPTRLookUp() {};

    virtual int getData() { return data; };
};

#endif // EX_33_H