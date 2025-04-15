#include<iostream>
using namespace std;

int main()
{
	int a,b;
	cout<<"Enter two integers:"<<endl;;
	cout<<"a=";
	cin>>a;
	cout<<"b=";
	cin>>b;
	
	//Logical AND
	cout<<"(a>0)&&(b>0):"<<((a>0)&&(b>0))<<endl;
	
	//Logical OR
	cout<<"(a>0)||(b>0):"<<((a>0)||(b>0))<<endl;
	
	//Logical NOT
	cout<<"!(a>0):"<<(!(a>0))<<endl;
	cout<<"!(b>0):"<<(!(b>0))<<endl;
	return 0;
}
