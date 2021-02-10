#include<iostream>
using namespace std;
//function declaration
void enter();
void check(int);
void prime(int);
//main program
int main()
{
enter();
return 0;

}
//function to enter value
void enter()
{
int num;
cout<<"Enter number:"; 
cin>>num; 
check(num);
}
//function to check whether the input is positive or negative
void check(int num)
{
if(num<0)
{
cout<<"invalid input enter value again"<<endl;
enter();
}
else
{
prime(num);
}
}
//function to check for prime number
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
