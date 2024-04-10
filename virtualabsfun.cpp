#include <iostream>
using namespace std;
class animal {
    int barks;
 
public:
    virtual void bark() = 0;
    int getX() { 
      return barks;
    }
};
class dog : public animal {
    int y;
 
public:
    void bark() { cout << "barking"; }
};
 
int main(void)
{
    dog d;
    d.bark();
    return 0;
}
