#include<iostream>
using namespace std;

class classone
{
    public:
        void class1()
        {
        cout<<"the class one.\n";
        }
};

class classtwo : public classone
{
    public:
        void class2()
        {
        cout<<"the class two.\n";
        }
};

class classthree : public classone
{
    public:
        void class3()
        {
        cout<<"the class three.\n";
        }
};

class classfour : public classtwo , public classthree
{
    public:
        void class4()
        {
        cout<<"the class four.\n";
        }
};

int main()
{
    classfour obj1;

    // obj1.class1();  // it is ambiguous

    obj1.class2();
    obj1.class3();
    obj1.class4();

}
