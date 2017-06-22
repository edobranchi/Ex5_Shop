//
// Created by Edoardo on 22/06/2017.
//

#ifndef EX5_SHOP_ITEM_H
#define EX5_SHOP_ITEM_H

#include "iostream"

class Item {
public:
    Item(std::string name, float price) : _name(name), _price(price){}

    virtual ~Item() {}

    const std::string &get_name() const {
        return _name;
    }

    void set_name(const std::string &name) {
        Item::_name = name;
    }

    float get_price() const {
        return _price;
    }

    void set_price(float price) {
        Item::_price = price;
    }

private:
    std::string _name;
    float _price;
};

#endif //EX5_SHOP_ITEM_H
