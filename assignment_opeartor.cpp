#include<iostream>
using namespace std;

int main()
{
	int num1,num2;
	cout<<"Enter two numbers:";
	cout<<"num1=";
	cin>>num1;
	cout<<"num2=";
	cin>>num2;
	
	cout<<"Initial values:"<<endl;
	cout<<"num1="<<num1<<"num2="<<num2<<endl;
	
	//Simple Assignment;
	int x=num1;
	cout<<"x=num1: x="<<x<<endl;
	
	
	//Addition Assignment
	x+=num2;
	cout<<"x+=num2 x="<<x<<endl;
	
	//Substraction Assignment
	x-=num2;
	cout<<"x-=num2 x="<<x<<endl;
	
	//Multiplication Assignment
	x*=num2;
	cout<<"x*=num2 x="<<x<<endl;
	
	//Division Assignment
	if(num2>0){
	
	x/=num2;
	cout<<"x/=num2 x="<<x<<endl;
}
else{
	cout<<"Division by zero is undefined."<<endl;
}

	//Mod Assignment
	if(num2>0)
	{
	
	x%=num2;
	cout<<"x%=num2 x="<<x<<endl;
}
else
{
	cout<<"Division by zero is undefined."<<endl;
}
	//Bitwise AND Assignment
	x&=num2;
	cout<<"x&=num2 x="<<x<<endl;
	
	//Bitwise OR Assignment
	x^=num2;
	cout<<"x^=num2 x="<<x<<endl;
	
	//Left Shift Assignment
	x<<=1;
	cout<<"x<<=1 x="<<x<<endl;
	
	//Right Shift Assignment
	x>>=1;
	cout<<"x>>=1 x="<<x<<endl;
	return 0;
}
