#include <iostream>
#include <string>
#include "discountSale.h"
#include "dog.h"

class base
{
    std::string name{};
public:
    base(const std::string& n = "base") : name{n}
    {
        std::cout << "base() constructor\n";
    }
    std::string getName() const {return name+'\t';}
    // virtual void f() = 0;//{std::cout << "base::f()\t";}
    virtual ~base() = default; //{std::cout << "~base() destructor\n";}
};

class derived11 : virtual public base
{
public:
    derived11() {std::cout << "derived11 constructor\n";}
};
class derived12 : virtual public base
{
public:
    derived12() {std::cout << "derived12 constructor\n";}
};

class derived2 : public derived11, public derived12
{
public:
    derived2() {std::cout << "derived2 constructor\n";}
};

/*class derived : public base
{
    int* a{};
public:
    derived(int length = 10, const std::string& n = "derived") : base{n}, a{new int[length]} {}
    //virtual void f() override {std::cout << "derived::f()\t";}
    void g() {std::cout << "derived::g()\t";}
    ~derived()
    {
        std::cout << "~derived() destructor\n";
        delete[] a;
    }

};

class derived2 : public derived
{
public:
    derived2(int length = 10, const std::string& n = "derived2") : derived{length, n} {}
    void f() override {std::cout << "derived2::f()\t";}
};

void f(base& b)
{
    b.f(); std::cout << '\n';
}*/

int add(int x, int y)
{
    return x + y;
}

int main()
{
    dog vdog;
    pet vpet;
    
    vdog.name = "Tiny";
    vdog.breed = "Great Dane";
    
    vpet = vdog;
    vpet.print();
    
    dog *pdog{&vdog};
    pet *ppet{pdog};
    ppet->print();
    
    
    /*base b;
    derived11 d11;
    b = d11;
    derived2 d2;*/
    
    /*derived2 d;
    d.f();
    d.g();*/
    
    /*sale simple(10);
    discountSale discount(11, 10);
    
    std::cout.setf(std::ios::fixed | std::ios::showpoint);
    std::cout.precision(2);
    
    if (discount < simple)
    {
        std::cout << "Discounted item is cheaper.\n";
        std::cout << "Savings is $" << simple.savings(discount); // simple - discount
    }
    else
        std::cout << "Discounted item is not cheaper.\n";*/
    
    /*int (*pFunc)(int, int) {add};
    std::cout << pFunc(5, 3) << '\n';*/
    
    /*derived* d{new derived{5}};
    base* pb{d};
    delete pb;*/
    
    /*derived d{}; std::cout << d.getName(); d.f(); f(d);
    base& rb{d}; std::cout << rb.getName(); rb.f(); f(rb);
    base* pb{&d}; std::cout << pb->getName(); pb->f(); f(*pb);*/
    
    return 0;
}
