#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>
#include "CustomerType.h"
#include "CreditCard.h"

class Customer
{
    private:
        std::string _name;
        std::string _id;
        CustomerType _customer_type;
        CreditCard* _credit_card;

    public:
        Customer(
            std::string name,
            std::string id,
            CustomerType customer_type,
            CreditCard* credit_card
        );

        ~Customer() {
            delete _credit_card;
            std::cout << "Customer With ID : " << _id << " destroy\n";
        }

        std::string name() const { return _name; }

        std::string id() const { return _id; }

        CustomerType customerType() const { return _customer_type; }

        CreditCard* creditCard() const { return _credit_card; }

        friend std::ostream &operator<<(std::ostream &os, const Customer &rhs);

};

std::string DisplayCustomerEnum(const CustomerType value);

#endif // CUSTOMER_H
