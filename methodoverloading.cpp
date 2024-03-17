// METHOD OVERLOADING C++

#include<iostream>
 
using namespace std;

class arithmeticaddition
{
    public:
        int add (int a,int b)
        {
            return a+b;
        }
        double add (double a,double b)
        {
            return a+b;
        }
        int add (int a,int b,int c)
        {
            return a+b+c;
        }
};

int main()
{
    arithmeticaddition doadd;
    cout<<" Sum of Integers :- "<<doadd.add(5,6)<<endl;
    cout<<" Sum of Integers :- "<<doadd.add(7.9,5.6)<<endl;
    cout<<" Sum of Integers :- "<<doadd.add(1,2,3)<<endl;
}
