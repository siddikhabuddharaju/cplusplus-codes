#include<iostream>
using namespace std;

void evenodd(int n);

int main()
{
    int number;
    cout<<"Enter the Value of Number :- ";
    cin>>number;
    evenodd(number);
}

void evenodd(int n)
{
    if(n%2==0)
        cout<<n<<" is an Even Number.\n";
    else
        cout<<n<<" is an Odd NUmber. \n";
}
