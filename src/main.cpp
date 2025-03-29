#include <iostream>

#include <Bus.hpp>

template<typename T>
void print(T& obj){ //static polymorphism
    obj.print();
}

void dynamic_print(Car* car){ //dynamic polymorphism
    car->print();
}

int main(){
    std::cout << "24 вариант!\n";

    Car* car = new Car("Nissan 350Z", 250);
    Bus* bus = new Bus("Volvo Bussar", 105, 70);

    car->print(); //calling default print method from vtable
    std::cout << std::endl;
    bus->print(); //calling default print method from vtable
    std::cout << std::endl;

    print(*car); //static polymorhic print
    std::cout << std::endl;
    print(*bus); //static polymorhic print
    std::cout << std::endl;

    dynamic_print(car); //dynamic polymorphic print
    std::cout << std::endl;
    dynamic_print(bus); //dynamic polymorphic print
    std::cout << std::endl;

    delete bus;
    delete car;
}