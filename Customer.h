//
// Created by Edoardo on 22/06/2017.
//

#ifndef EX5_SHOP_CUSTOMER_H
#define EX5_SHOP_CUSTOMER_H


#include <string>

class Customer {
public:

    Customer(std::string name, std::string surname, bool premium, std::string address) : _name(name), _surname(surname), _premium(premium), _address(address){}
    virtual ~Customer() { }

    const std::string &get_name() const {
        return _name;
    }

    void set_name(const std::string &_name) {
        Customer::_name = _name;
    }

    const std::string &get_surname() const {
        return _surname;
    }

    void set_surname(const std::string &_surname) {
        Customer::_surname = _surname;
    }

    bool is_premium() const {
        return _premium;
    }

    void set_premium(bool _premium) {
        Customer::_premium = _premium;
    }

    const std::string &get_address() const {
        return _address;
    }

    void set_address(const std::string &_address) {
        Customer::_address = _address;
    }

private:
    std::string _name;
    std::string _surname;
    bool _premium;
    std::string _address;
};


#endif //EX5_SHOP_CUSTOMER_H
