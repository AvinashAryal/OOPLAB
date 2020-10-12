#include<iostream>
#define PI 3.14
using namespace std;
float Area(float r)
{
    return PI*r*r;
}
float Area(float a,float b)
{
    return a*b;
}
int main()
{
    float r,l,b;
    cout<<"Enter the radius of the circle"<<endl;
    cin>>r;
    cout<<"Enter the length and breadth of the rectangle"<<endl;
    cin>>l>>b;
    cout<<"The area of circle is "<<Area(r)<<" sq units."<<endl;
    cout<<"The area of the rectangle is "<<Area(l,b)<<" sq units.";
    return 0;
}

