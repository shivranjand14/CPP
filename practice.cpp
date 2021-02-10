#include<iostream>
using namespace std;



//In this program we see DIVISOR , FACTORIAL , REVERSE NUMBER , PALINDROME , SWITCH CASE  :)







class my{

public:void call(int n)//divisor nqt
{
   
 cout<<"Excellent Work you choose Divisor  "<<"Enter Number"<<endl;
 cin>>n;
 	for(int i=1;i<=n;i++)
 	{
 	   if(n%i==0)
 	   {
 	   	cout<<"\t"<<i;	
		}
	 }
	 cout<<"\n"<<endl;
	 scase(n);
}


public:void fact(int n)
{
	 cout<<"Excellent Work you choose Factorial  "<<endl;
	cout<<"Enter Number"<<endl;
	int fact=1;n;
	cin>>n;
	for(int i=n;i>0;i--) //i=5;5>0;5--  i=4;4>0;4-- ..... i=1;1>0;1--
	{
		fact=fact*i;
	}
		cout<<"\t"<<fact<<endl;
		 scase(n);
	}
	
public:void palindrome()
{
	cout<<"Excellent Work you choose palindrome Number  "<<endl;
	int n,rev=0,reminder;
	cout<<"Enter number"<<endl;
	cin>>n;
	int original=n;
	while(n!=0)
	{
	reminder = n%10;
	rev= rev * 10+reminder;
	n=n/10;
	}
	if(original == rev)
	cout<<"Number is  palin "<<rev<<endl;
	else
	cout<<"sorry Not palin "<<rev<<endl;
	 scase(n);
}


public : void reverse()
{
	cout<<"Excellent Work you choose Reverse Number  "<<endl;
	int n,rev=0,reminder;
	cout<<"Enter number";
	cin>>n;
	while(n!=0)
	{
	reminder = n%10;
	rev= rev * 10+reminder;
	n=n/10;
	
}
cout<<"Reverse number is "<<rev<<endl;
 scase(n);
}

void scase(int n)
{
	int ch;
    cout<<"\t"<<"Enter 1 for Divisor\n\tEnter 2 for Factorial\n\tEnter 3 for Reverse Number\n\tEnter 4 for Palindrome Number = "<<endl;
    cin>>ch;
	
	switch (ch)
	{
	case 1: 
	         call(n);
	         break;
	case 2:
	       	fact(n);
	       	break;
	case 3:
	       	reverse();
	       	break;
	case 4:
	       	palindrome();
	       	break;
	default :
			cout<<"Sorry bhai wrong input ;) "<<endl;	
}
}

public:void exit()
{
	cout<<"\n\n\tTHANK YOU BYEE BYEE KEEP IT UP \n\n";
}

};

int main()
{
	
	my m;

	int n;
	
	cout<<"\t"<<"Enter 1 for Divisor"<<endl;
	cout<<"\t"<<"Enter 2 for Factorial"<<endl;
	cout<<"\t"<<"Enter 3 for Reverse Number"<<endl;
	cout<<"\t"<<"Enter 4 for Palindrome Number"<<endl;
	cout<<"\t"<<"Enter 5 for exit"<<endl;
	//cout<<"\t"<<"Enter 5 for Switch case"<<endl;;
	cin>>n;
	if(n==1)
	m.call(n);
	else if(n==2)
	m.fact(n);
	else if(n==3)
	m.reverse();
	else if(n==4)
	m.palindrome();
	else
	cout<<"Wrong Input its okay now we Enter in Switch case "<<endl;
    //scase(n);
    m.exit();

	return 0;
	
}
