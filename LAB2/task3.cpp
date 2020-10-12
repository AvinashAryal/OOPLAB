#include<iostream>
using namespace std;
class complex
{
    float real;
    float img;
    static int n;
    public:
    void getdata()
    {
        n++;
        cout<<"Enter the real and imaginary part of complex number "<<n<<":"<<endl;
        cin>>real>>img;
    }
    void showdata()
    {
        cout<<real<<" + "<<img<<"i"<<endl;
    }
     void add(complex a,complex b)
    {
        real = a.real + b.real;
        img = a.img + b.img;
    }
};
int complex::n;

int main()
{
     complex c1,c2,c3;
     c1.getdata();
     c2.getdata();
     c3.add(c1,c2);
     cout<<"The result is:- ";
     c3.showdata();
	return 0;
}
