#include<iostream>
#include "Invoice.h"

Invoice:: Invoice(std::string invoiceNumber, InvoiceType invoiceType, int invoiceItems)
 :_invoiceNumber(invoiceNumber), _invoiceType(invoiceType), _invoiceItems(invoiceItems)
{
}

std::ostream &operator<<(std::ostream &os, const Invoice &rhs) {
    os << "_invoiceNumber: " << rhs._invoiceNumber
       << " _invoiceType: " << DisplayInvoiceType(rhs._invoiceType)
       << " _invoiceItems: " << rhs._invoiceItems;
    return os;
}

std::string DisplayInvoiceType(const InvoiceType value){
    if(value == InvoiceType::SMS_GENERATED){
        return "SMS_GENERATED";
    }
    else if(value == InvoiceType::PAPER_SLIP){
        return "PAPER_SLIP";
    }
    else{
        return "E_BILL";
    }
}
