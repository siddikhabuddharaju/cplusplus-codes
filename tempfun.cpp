#include<iostream>
using namespace std;
template <typename Number>
Number add(Number num1,Number num2)
{
        return num1+num2;
}
template <typename Number>
Number sub(Number num1,Number num2)
{
    return num1-num2;
}
template <typename Number>
Number mul(Number num1,Number num2)
{
    return num1*num2;
}
template <typename Number>
Number divs(Number num1,Number num2)
{
    return num1/num2;
}
int main(){
    int intres;
    cout<<"1.addition 2.subtraction 3.multiplication"<<endl;
    int choice;
    cout<<"enetr choice"<<endl;
    cin>>choice;
    cout<<"enetr two numbers"<<endl;
    int num1,num2;

    cin>>num1>>num2;
    switch(choice){
        case 1:
        {
        intres=add(num1,num2);
        cout<<intres<<endl;
        break;

    }
    case 2:
        {
        intres=sub(num1,num2);
        cout<<intres<<endl;
        break;

    }
    case 3:
        {
        intres=mul(num1,num2);
        cout<<intres<<endl;
        break;
    }
    case 4:
        {
        intres=divs(num1,num2);
        cout<<intres<<endl;
        break;
    }
    
    default:
    {
        cout<<"invalid operation"<<endl;
    }
    }
}
