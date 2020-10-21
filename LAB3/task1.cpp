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
        cout<<real<<" + "<<img<<"i"<<endl;
    }
    complex operator ++()
    {
        complex temp;
        temp.real = ++real;
        temp.img = ++img;
        return temp;
    }
    complex operator++(int)
    {
        complex temp;
        temp.real = real++;
        temp.img = img++;
        return temp;
    }
};
int main()
{
    complex c1,c2,c3;
    c1.getdata();
    c2 = ++c1;
    c3 = c2++;
    c1.showdata();
    c2.showdata();
    c3.showdata();
    return 0;
}
