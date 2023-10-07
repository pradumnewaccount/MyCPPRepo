#ifndef CREDITCARD_H
#define CREDITCARD_H

#include <iostream>
#include "CardType.h"

class CreditCard
{
    private:
        std::string _number;
        CardType _card_type;
        float _limit;
        int _card_cvv_number;

    public:
        CreditCard(
            std::string number,
            CardType card_type,
            float limit,
            int card_cvv_number
        );

        ~CreditCard() {
            std::cout << "Credit with number " << _number << " destroy\n";
        }

        std::string number() const { return _number; }

        CardType cardType() const { return _card_type; }

        float limit() const { return _limit; }

        int cardCvvNumber() const { return _card_cvv_number; }

        friend std::ostream &operator<<(std::ostream &os, const CreditCard &rhs);

        
};

std::string DisplayCardEnum(const CardType value);

#endif // CREDITCARD_H
