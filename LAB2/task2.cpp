#include<iostream>
#include<iomanip>
using namespace std;
class student
{
    char name[20];
    int roll;
    char address[20];

    public:
    void getdata(int n)
    {
        cout<<"Enter the name,roll and address of student "<<n+1<<":-"<<endl;
        cin>>name>>roll>>address;
    }
    void showdata(int n)
    {
        cout<<"The details of student "<<n+1<<":-"<<endl;
        cout<<"Name:-"<<name<<setw(15)<<"Roll:-"<<roll<<setw(15)<<"Address:-"<<address<<endl<<endl;
    }
};
int main()
{
	int n;
	student s[50];
	cout<<"Enter the number of students:- "<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	    s[i].getdata(i);
	for(int i=0;i<n;i++)
	     s[i].showdata(i);
	return 0;
}
