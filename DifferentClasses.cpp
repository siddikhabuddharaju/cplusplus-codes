//write a c++ program to access public private and protected
// members of a parent class using public,private,protected simple inheritance
//
#include<iostream>
using namespace std;

class diffclasses
{
    public :
        int publicvar = 10;
    protected :
        int protectedvar = 20;
    private :
        int privatevar = 30;
    // MEMBERS
    public:
    
        int displayprivate()
        {
            return privatevar;
        }
        int displayprotected()
        {
            return protectedvar;
        }    
};

class publicclass : public diffclasses
{
   public:

    int variablepublic = publicvar;
    int variableprotected = protectedvar;
    int variableprivate = displayprivate();
};

class protectedclass : protected diffclasses
{
    public:

    int variablepublic1 = publicvar;
    int variableprotected2 = protectedvar;
    int variableprivate3 = displayprivate();
};

class privateclass : private diffclasses
{
    public:

    int variablepublic01 = publicvar;
    int variableprotected02 = displayprotected();
    int variableprivate03 = displayprivate();
};

int main()
{
    publicclass print;
    protectedclass print1;
    privateclass print2;


    cout<<"PUBLIC CLASS :- \n";
    cout<<"Public Variable:- "<<print.variablepublic<<endl;
    cout<<"Protected Variable :- "<<print.variableprotected<<endl;
    cout<<"Private Variable :- "<<print.variableprivate<<endl;

        cout<<endl;

    cout<<"PROTECTED CLASS :- \n";
    cout<<"Public Variable:- "<< print1.variablepublic1<<endl;
    cout<<"Protected Variable :- "<<print1.variableprotected2<<endl;
    cout<<"Private Variable :- "<<print1.variableprivate3<<endl;

        cout<<endl;

    cout<<"PRIVATE CLASS :- \n";
    cout<<"Public Variable:- "<<print2.variablepublic01<<endl;
    cout<<"Protected Variable :- "<<print2.variableprotected02<<endl;
    cout<<"Private Variable :- "<<print2.variableprivate03<<endl;
}
