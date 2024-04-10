#include<iostream>
using namespace std;
class partial{
    public:
    void displaymsg(){
        cout<<"original msg"<<endl;
    }
    virtual void displaytext(){
        cout<<"original text"<<endl;
    }

};
class child:public partial{
    public:
    void displaytext(){
        cout<<"original text2"<<endl;
    }

};
int main(){
    child obj;
    obj.displaymsg();
    obj.displaytext();
}
