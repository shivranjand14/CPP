#include<iostream>
using namespace std;
class stud
{
	public:
		int rollno;
		char name[20];
		
		void getdata()
		{
			cout<<"Enter RollNo :";cin>>rollno;
			cout<<"Enter Name :";cin>>name;
		}
		void showdata()
		{
			cout<<"Name is :"<<name<<endl;
			cout<<"Roll no is :"<<rollno;
		}
	};
		int main()
		{
			stud s;
			s.getdata();
			s.showdata();
			return 0;
		}

