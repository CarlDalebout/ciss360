#ifndef REGISTER_H
#define REGISTER_H

#include <iostream>
#include <vector>

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




    uint8_t & pc()       { return pc_;}
    uint8_t   pc() const { return pc_;}
    uint8_t & hi()       { return hi_;}
    uint8_t   hi() const { return hi_;}
    uint8_t & lo()       { return lo_;}
    uint8_t   lo() const { return lo_;}
    uint8_t & operator[](int index);    

    void update(u_int32_t);

    void print();

private:
    uint8_t registers_[32];
    uint8_t pc_;
    uint8_t hi_;
    uint8_t lo_;
};

#endif