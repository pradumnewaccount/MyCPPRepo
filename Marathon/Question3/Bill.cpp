#include <iostream>
#include "Bill.h"

Bill:: Bill(float billAmount, float bellTaxAmount, Invoice* billAssociatedInvoice)
: _billAmount(billAmount), _billAssociatedInvoice(billAssociatedInvoice)
{
    if(bellTaxAmount > billAmount){
        std::runtime_error("BillTaxAmount is greater than BillAmount");
    }else{
        _bellTaxAmount = bellTaxAmount;
    }
}

std::ostream &operator<<(std::ostream &os, const Bill &rhs) {
    os << "_billAmount: " << rhs._billAmount
       << " _bellTaxAmount: " << rhs._bellTaxAmount
       << " _billAssociatedInvoice: " << rhs._billAssociatedInvoice;
    return os;
}
