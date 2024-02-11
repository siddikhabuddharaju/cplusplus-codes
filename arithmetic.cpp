#include<iostream>
using namespace std;

int main()
{
    float a,b;
    int option;

    cout<<"Enter both the values of A and B :- ";
    cin>>a>>b;
    cout<<"Choose from Below operations :- \n";
    cout<<"1.Add \n2.Subract \n3.Multiply \n4.Divide \n";
    cin>>option;
    switch(option)
    {
        case 1 : cout<<"Addtion of "<<a<<" and "<<b<<" is "<<a+b<<endl;
                break;
        case 2 : cout<<"Subration of "<<a<<" and "<<b<<" is "<<a-b<<endl;
                break;
        case 3 : cout<<"Multiplication of "<<a<<" and "<<b<<" is "<<a*b<<endl;
                break;
        case 4 : cout<<"Division of "<<a<<" and "<<b<<" is "<<a/b<<endl;
                break;
        default: cout<<"Entered Invalid choice !\n";

    }
}
