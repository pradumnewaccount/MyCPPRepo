#ifndef DEVELOPR_H
#define DEVELOPR_H

#include <iostream>
#include "Employee.h"

class Developr : public Employee 
{
    private:

    public:
        Developr() = default;

        void applyForLeaves(){
            std::cout << "Developer applies for leave\n";
        }

        //Virtual Function
        virtual void PayTax(){
            std::cout << "Developer pays 30% of salary\n";
        }

        // virtual void Display(){
        //     std::cout << "Developers Display Called\n";
        // }


       ~Developr() {
        std::cout << "Developer Destroyed\n";
       }
};

#endif // DEVELOPR_H
