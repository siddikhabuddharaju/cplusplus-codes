#include<iostream>
#include"boxVolume.h"
#include"boxArea.h"
using namespace std;
int main()
{
    float length, width, height;
    cout<<"Enter Length , Width , Height :- ";
    cin>>length>>width>>height;
    boxVolume(length,width,height);
    boxArea(length,width,height);
}
