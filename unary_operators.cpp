#include<iostream>
using namespace std;

int main()
{
	int num1=5;
	int num2=-9;
	int *ptr=&num1;
	
	//unary plus(+)
	int unary_plus=+num2;
	cout<<"Unary Plus:"<<unary_plus<<endl;
	
    //unary minus(-)
    int unary_minus=-num1;
    cout<<"Unary minus:"<<unary_minus<<endl;
    
    //prefix increment(++num)
    cout<<"Prefix Increment:"<<++num1<<endl;
    
    //postfix increment(num++)
    cout<<"Postfix Increment:"<<num1++<<endl;
    cout<<"value after postfix increment:"<<num1<<endl;
    
    //prefix decrement(--num)
    cout<<"Prefix Decrement:"<<--num1<<endl;
    
    //Postfix Decrement
    cout<<"Postfix Decrement:"<<num1--<<endl;
    cout<<"Value after postfix decrement:"<<num1<<endl;
    
    //Logical Not(!)
    cout<<"Logical Not (!num1):"<<!num1<<endl;
    
    //Bitwise Not(~)
    cout<<"Bitwise Not (~num1):"<<~num1<<endl;
    
    //Address of(&)
    cout<<"Address of num1 (&num1):"<<&num1<<endl;
    
    //Dereference(*)
    cout<<"Dereference pointer (*ptr):"<<*ptr<<endl;
    
    //sizeof operator
    cout<<"Size of int :"<<sizeof(int)<<"bytes"<<endl;
    
    return 0;
    
}
