#include<iostream>
using namespace std;
class test
{
    float a;
    float b;
    public:
    test()
    {
        a=0;
        b=0;
    }
    test(float x,float y)
    {
        a=x;
        b=y;
    }
    test(test &t)
    {
        a= t.a;
        b = t.b;
    }
    void showdata()
    {
        cout<<"a="<<a<<endl<<"b="<<b<<endl;
    }
    ~test()
    {
        cout<<"destroying...."<<endl;
    }
};

int main()
{
	test t1;
	test t2(1.2,3.4);
	test t3(t2);
	t1.showdata();
	t2.showdata();
	t3.showdata();
	return 0;
}