
#include<iostream>
#include<iomanip>
using namespace std;
class matrix
{
    int A[10][10];
    int m,n;
    public:
    void getdata()
    {
        cout<<"Start entering elements"<<endl;
        for(int i=0;i<3;i++)
            for (int j=0;j<3;j++)
                cin>>A[i][j];
    }

    void showdata()
    {
        cout<<"The result is :-"<<endl;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<setw(5)<<A[i][j];
            }
            cout<<endl;
        }
    }
   matrix operator *(matrix a)
   {
       matrix temp;
       for(int i=0;i<3;i++)
       {
       for(int j=0;j<3;j++)
       {
           int sum =0;
           for(int k=0;k<3;k++)
          {
              sum=sum + A[i][k] * a.A[k][j];
          }
          temp.A[i][j]=sum;
       }
      }
   return temp;
   }
};

int main()
{
    matrix m1,m2,m3;
    m1.getdata();
    m2.getdata();
    m3 = m1 * m2;
    m3.showdata();
    return 0;

}
