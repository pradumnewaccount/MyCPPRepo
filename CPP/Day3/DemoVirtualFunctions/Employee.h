#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>

class Employee 
{
    private:
        
    public:
        Employee() = default;

        void applyForLeaves(){
            std::cout << "Employees applies for leave\n";
        }

        //Virtual Function
        virtual void PayTax(){
            std::cout << "Employees pays 20% of salary\n";
        }

        virtual void Display(){
            std::cout << "Employee Display Called\n";
        }

        virtual ~Employee() {
            std::cout <<"Employee Destroyed\n";
        }
};

#endif // EMPLOYEE_H
