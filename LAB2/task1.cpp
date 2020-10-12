#include<iostream>
using namespace std;
class student
{
    char name[20];
    int roll;
    char address[20];

    public:
    void getdata()
    {
        cout<<"Enter the name,roll and marks of the student"<<endl;
        cin>>name>>roll>>address;
    }
    void showdata()
    {
        cout<<"The details are:-"<<endl;
        cout<<"Name:-"<<name<<endl<<"roll:-"<<roll<<endl<<"address:-"<<address;
    }
};
int main()
{
	student s1;
	s1.getdata();
	s1.showdata();
	return 0;
}
