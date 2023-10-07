#ifndef BILL_H
#define BILL_H

#include <iostream>
#include "Invoice.h"


class Bill
{
    private:
        float _billAmount;
        float _bellTaxAmount;
        Invoice* _billAssociatedInvoice;

    public:
        Bill(
            float billAmount,
            float bellTaxAmount,
            Invoice* billAssociatedInvoice
        );

        ~Bill() {
            std::cout << "Bill Destroyed\n";
        }

        float billAmount() const { return _billAmount; }

        float bellTaxAmount() const { return _bellTaxAmount; }

        Invoice* billAssociatedInvoice() const { return _billAssociatedInvoice; }

        friend std::ostream &operator<<(std::ostream &os, const Bill &rhs);

        
};

#endif // BILL_H
