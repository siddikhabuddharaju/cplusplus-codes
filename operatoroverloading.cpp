// OPERATOR OVERLOADING

#include<iostream>
using namespace std;

class complex
{
    public:
        int realpart,imaginarypart;
        complex( float r=0 , float i=0 )
        {
            realpart = r;
            imaginarypart = i;
        }
        complex operator + (complex obj)
        {
            complex result;
            result.realpart = realpart + obj.realpart;
            result.imaginarypart = imaginarypart + obj.imaginarypart ;
            return result;
        }
        void display()
        {
            cout<<realpart<<" + i "<<imaginarypart<<endl;
        }
};

int main()
{
    float a,b,c,d,e,f;
    cout<<"Enter the value of real and imaginary value of a complex number 1 : ";
    cin>>a>>b;
    cout<<"Enter the value of real and imaginary value of a complex number 2 : ";
    cin>>c>>d;
    complex c1(a,b) , c2(c,d);
    complex c3 = c1 + c2;
    c3.display();
}
