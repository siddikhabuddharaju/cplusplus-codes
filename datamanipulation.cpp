#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
    //working of 'endl'
    cout<<"Welcome to c++ programming !"<<endl;

    //working of 'ends'
    cout<<"JAVA"<<ends;
    cout<<endl;

    //working of 'ws' - terminates by inserting null operator
    string s ;
    getline(cin>>ws,s);
    cout<<s<<endl;

    //working of 'setw' - removes whitespaces if they are present
    cout<<setw(20)<<"Hello!\n";

    //working of 'setfill' - creates spaces provides in setw(n)
    cout<<setfill('*')<<setw(30)<<"Java is complex than C++\n";

    //working of 'setprecision' - fills the space given by setw
    float pi;
    pi = 3.14159265;
    cout<<setprecision(2)<<pi<<endl;

    //working of 'flush' - setprecision decides the values after the decimal points
    int b = 9 ;
    cout.flush();
    cout<<"The value of b is "<<b;
}
