#include<iostream>
using namespace std;
inline int square(int a)
{
    return a*a;
}
int main()
{
    for(int i=0;i<5;i++)
    {
        cout<<square(i+1)<<endl;
    }
    return 0;
}
