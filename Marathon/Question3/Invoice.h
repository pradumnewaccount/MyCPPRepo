#ifndef INVOICE_H
#define INVOICE_H

#include <iostream>
#include "InvoiceType.h"

class Invoice
{
    private:
        std::string _invoiceNumber;
        InvoiceType _invoiceType;
        int _invoiceItems;

    public:
        Invoice(
            std::string invoiceNumber,
            InvoiceType invoiceType,
            int invoiceItems
        );



        ~Invoice() {
            std::cout << "Invoice with number " << _invoiceNumber <<" destroyed\n";
        }

        std::string invoiceNumber() const { return _invoiceNumber; }

        InvoiceType invoiceType() const { return _invoiceType; }

        int invoiceItems() const { return _invoiceItems; }

        friend std::ostream &operator<<(std::ostream &os, const Invoice &rhs);

        
};

std::string DisplayInvoiceType(const InvoiceType value);

#endif // INVOICE_H
