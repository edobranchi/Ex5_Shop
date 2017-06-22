#include <iostream>
#include "Customer.h"
#include "Order.h"

int main() {

    Customer* c= new Customer("Andrea", "Mellini", true, "Via Giacomo Puccini 86");
    Customer* c2= new Customer("Edoardo", "Branchi", false, "Via Gastone Breddo 13");

    Order* o= new Order(c);
    //Order* o= new Order(c2);

    Item* i1 = new Item("Pc", 200);
    Item* i2 = new Item("Mouse", 5);

    o->AddItem(i1);
    o->AddItem(i2);

    std::cout<<"Il Signor "<<c->get_name()<<" spende : ";
    // std::cout<<"Il Signor "<<c2->get_name()<<" spende : ";
    std::cout<<o->totalPrice()<<" $"<<std::endl;

}