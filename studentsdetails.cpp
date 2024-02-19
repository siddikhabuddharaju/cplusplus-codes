#include<iostream>
using namespace  std;

class Student
{
    public:
        string fullName;
        string rollNum;
        double semPercentage;
        string collegeName;
        int collegeCode;
        Student()
        {
            cout<<"Student ID has been created !"<<endl;
        }
        ~Student()
        {

        }

        void displayDetails() 
        {
            cout << "Name: " << fullName << endl;
            cout << "Roll Number: " << rollNum << endl;
            cout << "Semester Percentage: " << semPercentage << endl;
            cout << "College Name: " << collegeName << endl;
            cout << "College Code: " << collegeCode << endl;
        }
};

int main()
{
    Student Siddikha;
    cout<<"Enter your name :- ";
    getline(cin,Siddikha.fullName);
    cout<<"Enter your roll number :- ";
    cin>>Siddikha.rollNum;
    cout<<"Enter your sem percentage :- ";
    cin>>Siddikha.semPercentage;
    cout<<"Enter your college name :- ";
    cin>>Siddikha.collegeName;
    cout<<"Enter your college code :- ";
    cin>>Siddikha.collegeCode;
    
    // Clear the newline character from the buffer
    cin.ignore();

    Student Harshitha;
    cout<<"Enter your name :- ";
    getline(cin,Harshitha.fullName);
    cout<<"Enter your roll number :- ";
    cin>>Harshitha.rollNum;
    cout<<"Enter your sem percentage :- ";
    cin>>Harshitha.semPercentage;
    cout<<"Enter your college name :- ";
    cin>>Harshitha.collegeName;
    cout<<"Enter your college code :- ";
    cin>>Harshitha.collegeCode;

    Harshitha.displayDetails();
    Siddikha.displayDetails();

    return 0;
}
