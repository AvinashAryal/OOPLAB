#include<iostream>
using namespace std;
class complex
{
    float real;
    float img;
    public:
    void getdata()
    {
        cout<<"Enter the real and imaginary part"<<endl;
        cin>>real>>img;
    }
    void showdata()
    {
        cout<<"The sum is:"<<endl;
        cout<<real<<" + "<<img<<"i"<<endl;
    }
    friend complex operator +(complex ,complex);
};
complex operator + (complex c1,complex c2)
{
    complex temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;
    return temp;
}

int main()
{
    complex c1,c2,c3;
    c1.getdata();
    c2.getdata();
    c3 = c1+c2;
    c3.showdata();
    return 0;
}


