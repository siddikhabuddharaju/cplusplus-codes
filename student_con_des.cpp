#include<iostream>
using namespace std;

class Student
{
    public:
        Student()
        {
            string collegeName = "MVGR";
            int collegeCode=33;
            cout<<"College Name : "<<collegeName<<endl;
            cout<<"College Code: "<<collegeCode<<endl;
        }
        Student(string fullName, double semPerentage)
        {
            cout<<"Full Name : "<<fullName<<endl;
            cout<<"Sem Percentage : "<<semPerentage<<endl;
        }
        ~Student()
        {

        }
};

int main()
{
    Student Siddikha;
    string Name;
    float Val;
    cout<<"Enter your Name : ";
    getline(cin,Name);
    cout<<"Enter your Sem Percentage : ";
    cin>>Val;
    Student Siddikhaa(Name,Val);
}
