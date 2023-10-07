#include <iostream>
#include "CreditCard.h"

CreditCard:: CreditCard(std::string number, CardType card_type, float limit, int card_cvv_number)
 : _number(number), _card_type(card_type), _limit(limit)
{
    if(card_cvv_number >= 100 && card_cvv_number <1000){
        _card_cvv_number = card_cvv_number;
    }else{
        std::runtime_error("Invalid CVV Numver for Card");
    }
}


std::ostream &operator<<(std::ostream &os, const CreditCard &rhs) {
    os << "_number: " << rhs._number
       << " _card_type: " << DisplayCardEnum(rhs._card_type)
       << " _limit: " << rhs._limit
       << " _card_cvv_number: " << rhs._card_cvv_number;
    return os;
}

std::string DisplayCardEnum(const CardType value){
    if(value == CardType::SIGNATURE){
        return "SIGNATURE";
    }
    else if(value == CardType::MILES){
        return "MILES";
    }
    else{
        return "NEO";
    }
}
