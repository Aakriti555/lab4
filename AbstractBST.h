#ifndef ABSTRACTBST_h
#define ABSTRACTBST_h

class AbstractBST
{
public:
    virtual bool isEmpty() = 0;
    virtual void add(int key, int value) = 0;
    virtual void remove(int key) = 0;
    virtual bool search(int key) = 0;
};
#endif