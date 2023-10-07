#include <iostream>
#include "Product.h"

Product:: Product(std::string productId, ProductType productType, float productPrice, 
    std::string productBrand)
    :_productId(productId), _productType(productType), _productPrice(productPrice),
     _productBrand(productBrand)
{
}

float Product::ProductTaxAmount(){
    return 0.1f * productPrice();
}

std::ostream &operator<<(std::ostream &os, const Product &rhs) {
    os << "_productId: " << rhs._productId
       << " _productType: " << DisplayProductEnum(rhs._productType)
       << " _productPrice: " << rhs._productPrice
       << " _productBrand: " << rhs._productBrand;
    return os;
}

std::string DisplayProductEnum(const ProductType value){
    if(value == ProductType::APPLIANCE){
        return "APPLIANCE";
    }
    else if(value == ProductType::PERFUME){
        return "PERFUME";
    }
    else{
        return "FMCG";
    }
}
