#include<iostream>
using namespace std;

// INLINE VOID FUNCTION
inline void displayWelcomeMessage()
{
    cout<<"Welcome to C++ programming ! "<<endl;
}

class Box
{
    private:
        float width;
        float height;
        float length;
    public:
        //MEMBER FUNTION DEFINED INSIDE CLASS
        void boxArea(float width,float height,float length)
        {
            cout<<"Area of Box :- "<<(2*((length*width)+(width*height)+(height*length)))<<endl;
        }
        void boxVolume(float width,float height,float length);
        friend void displayBoxDimensions(Box S);
        void set(float l,float w,float h)
        {
            length=l;
            width=w;
            height=h;
        }

};

//MEMBER FUNTION DEFINED OUTSIDE CLASS
void Box::boxVolume(float width,float height,float length)
{
    cout<<"Volume of the Box :- "<<(length*width*height)<<endl;
}


void displayBoxDimensions(Box S)
{
    cout<<"Dimensions of Box : "<<S.width<<" X "<<S.height<<" X "<<S.length<<endl;
}

int main()
{
    Box box;
    float w,h,l;
    cout<<"Enter the Width, Height and Length : ";
    cin>>w>>h>>l;
    box.set(l,w,h);
    box.boxVolume(w,h,l);
    box.boxArea(w,h,l);
    displayBoxDimensions(box);
    displayWelcomeMessage();
}
