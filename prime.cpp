#include<iostream>
using namespace std;
void enter();
void check(int);
void prime(int);

int main()
{
 
    enter();
    return 0;
}
void enter()
{
	int n;
	cout<<"enter no";
	cin>>n;
	check(n);
}
void check(int n)
{
	  
        if(n<0)
        {
        cout<<"Enter valid no"<<endl;
        enter();
		}
    else
    {
        prime(n);
    }
}

void prime(int n)
{

        int i,div=0;
        for( i=2;i<n;i++)
        {

         if(n%i==0) 
         {
          div++;//jevah tujha number cha remainder = 0 div increment hoil
         }
     }
         if(div>=1){ //div = 0
         	cout<<n<<" no is not prime";
		 }
     	else
     {
         cout<<n<<" no is prime";
        
     }
        
    }
  
  
  
    /*
	
	
	void prime(int num)
{
int i,div=0; 
for(i=1;i<=num;i++) 
{
if(num%i==0)
{
div++; 
}
}
//prime number only have two divisors
if(div==2)
{
cout<<num<<" is a prime number";
}
//not a prime number
else
{
cout<<"not";
}
}
*/

