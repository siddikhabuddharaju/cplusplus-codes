#include<iostream>
using namespace std;

class one
{
    public :
        void one1()
        {
            cout<<"The One.\n";
        }
};

class two 
{
    public :
        void two2()
        {
            cout<<"The Two.\n";
        }
};

// SIMPLE INHERITANCE

class three : public one
{
    public :
        void three3()
        {
            cout<<"The Three.\n";
        }
};

// HIERARCHIAL INHERITANCE

class four : public one
{
    public :
        void four4()
        {
            cout<<"The Four.\n";
        }
};

class five : public one
{
    public :
        void five5()
        {
            cout<<"The Five.\n";
        }
};

// MULTI-LEVEL INHERITANCE

class six : public five
{
    public :
        void six6()
        {
            cout<<"The Six.\n";
        }
};


// MULTIPLE INHERITANCE

class seven : public one , public two
{
    public :
        void seven7()
        {
            cout<<"The Seven.\n";
        }
};

// HYBRID INHERITANCE

class eight : public three , public seven 
{
    public :
        void eight8()
        {
            cout<<"The Eight.\n";
        };
};

int main()
{
    // SIMPLE INHERITANCE
    cout<<"Simple Inheritance.\n";
    three obj1;
    obj1.one1();
    obj1.three3();

    // MULTI-LEVEL INHERITANCE
    cout<<"Multi-Level Inheritance.\n";
    six obj2;
    obj2.one1();
    obj2.five5();
    obj2.six6();

    // MULTIPLE INHERITANCE
    cout<<"Multiple Inheritance.\n";
    seven obj3;
    obj3.one1();
    obj3.two2();
    obj3.seven7();

    // HIERARCHIAL INHERITANCE
    cout<<"Hierarchical Inheritance.\n";
    four obj4;
    five obj5;
    obj4.one1();
    obj4.four4();
    obj5.one1();
    obj5.five5();

    // HYBRID INHERITANCE
    cout<<"Hybrid Inheritance.\n";
    eight obj6;
    //obj6.one1(); it is ambiguous here
    obj6.two2();
    obj6.three3();
    obj6.seven7();
    obj6.eight8();
}
