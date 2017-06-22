//
// Created by Edoardo on 22/06/2017.
//

#ifndef EX5_SHOP_ORDER_H
#define EX5_SHOP_ORDER_H

#include "Item.h"
#include <list>

class Order {
public:
    Order(Customer* c) : c(c){}

    virtual ~Order() {   }

    void AddItem (Item* it){
        itemsOrdered.push_back(it);
    }

    void removeItem (Item* it){
        itemsOrdered.remove(it);
    }

    float totalPrice() {
        float total = 0;
        for (auto itr = itemsOrdered.begin(); itr != itemsOrdered.end(); itr++) {
            float itemPrice = (*itr)->get_price();
            if (itemPrice < 15 && c->is_premium()) {
                itemPrice = itemPrice - ((itemPrice * 10) / 100);
            }
            total += itemPrice;
        }
        return total;
    };

private:
    std::list<Item*> itemsOrdered;
    Customer* c;
};

#endif //EX5_SHOP_ORDER_H
