#include<iostream>
using namespace std;
int sum(int a=1,int b=2,int c=3)
{
    return a*b*c;
}
int main()
{
    cout<<sum()<<endl;
    cout<<sum(4)<<endl;
    cout<<sum(4,5)<<endl;
    cout<<sum(4,5,6)<<endl;
    return 0;
}
