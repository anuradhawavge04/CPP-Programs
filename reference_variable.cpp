#include<iostream>
using namespace std;

int main()
{
	int a=20;
	int &b=a;
	cout<<b<<endl;
	int multi=b*10;
	cout<<"Multiplication is:"<<multi;
	return 0;
	
}
