#ifndef A_H
#define A_H

#include<iostream>

class A
{
    public:
        A(int n);
        A(const A& other);
        virtual ~A();
        void print();

    protected:

    private:
        int value;

};

#endif // A_H
