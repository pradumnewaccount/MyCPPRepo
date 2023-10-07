#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
#include "ProductType.h"

class Product
{
    private:
        std::string _productId;
        ProductType _productType;
        float _productPrice;
        std::string _productBrand;


    public:
        //This is Parameterized constructor
        Product(
            std::string productId,
            ProductType productType,
            float productPrice,
            std::string productBrand
        );
         

         //This is Destructor for destroy object
        ~Product() {
            std::cout << "Product with ID : " << _productId << " destroy\n";
        }

        //Member Function for calculate tax on product
        float ProductTaxAmount();

        //Setter and Getter
        std::string productId() const { return _productId; }
        void setProductId(const std::string &productId) { _productId = productId; }

        ProductType productType() const { return _productType; }
        void setProductType(const ProductType &productType) { _productType = productType; }

        float productPrice() const { return _productPrice; }
        void setProductPrice(float productPrice) { _productPrice = productPrice; }

        std::string productBrand() const { return _productBrand; }
        void setProductBrand(const std::string &productBrand) { _productBrand = productBrand; }
        
        //Friend Function
        friend std::ostream &operator<<(std::ostream &os, const Product &rhs);

};

std::string DisplayProductEnum(const ProductType value);

#endif // PRODUCT_H
