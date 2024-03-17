#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() {
        cout << "Display method from Base class" << endl;
    }
};

class Derived : public Base {
public:
    void display() override {
        cout << "Display method from Derived class" << endl;
    }
};

int main() {
    Base *ptr = new Derived();
    ptr->display(); // Calls the display method of Derived class
    delete ptr;
    return 0;
}
