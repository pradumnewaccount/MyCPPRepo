#ifndef MANAGER_H
#define MANAGER_H

#include<iostream>
#include "Employee.h"

class Manager : public Employee 
{
    private:
        
    public:
        Manager() = default;

        void applyForLeaves(){
            std::cout << "Manager applies for leave\n";
        }

        //Virtual Function
        virtual void PayTax(){
            std::cout << "Manager pays 25% of salary\n";
        }

        // virtual void Display(){
        //     std::cout << "Manager Display Called\n";
        // }

        ~Manager() {
            std::cout << "Manager Destroyed\n";
        }
};


#endif // MANAGER_H
