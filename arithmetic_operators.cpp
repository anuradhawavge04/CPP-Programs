#include<iostream>
using namespace std;

int main()
{
	int a,b;
	cout<<"Enter two numbers:";
	cin>>a>>b;
	
	//arithmetic operators
	
	cout<<"Addition of two numbers is"<<a+b<<endl;
    cout<<"Substraction of two numbers is"<<a-b<<endl; 
	cout<<"Multiplication of two numbers is"<<a*b<<endl;
	
	if(b!=0)
	{
		cout<<"Division of two numbers is"<<a/b<<endl;
		cout<<"Modulous of two operators is"<<a%b<<endl;
		}	
		
		return 0;
}
