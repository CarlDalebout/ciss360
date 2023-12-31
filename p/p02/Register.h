#ifndef REGISTER_H
#define REGISTER_H

#include <iostream>
#include <vector>
#include <stack>
#include <map>
#include "Machine.h"
#include "Memory.h"

class Register
{
public:
    Register()
    :pc_(0), hi_(0), lo_(0)
    {
        for(int i = 0; i < 32; ++i)
        {
            registers_[i] = 0;
        }
    }

/*==========================================================================================
Functions
==========================================================================================*/
void update(Machine &, Memory &);
void print();

/*==========================================================================================
Sets and Gets
==========================================================================================*/
    uint32_t  & pc()       { return pc_;}
    uint32_t    pc() const { return pc_;}
    uint32_t  & hi()       { return hi_;}
    uint32_t    hi() const { return hi_;}
    uint32_t  & lo()       { return lo_;}
    uint32_t    lo() const { return lo_;}
    uint32_t  & operator[](int index);    

private:
    uint32_t registers_[32];
    uint32_t pc_;
    uint32_t hi_;
    uint32_t lo_;
};

#endif