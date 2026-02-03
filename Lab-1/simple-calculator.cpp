#include <iostream>
using namespace std;
int main(){
	double a,b;
	char c;
	
	cout<<"Enter first number";
	cin>>a;
	
	cout<<"Enter operator(+,-,/,*, :";
	cin>>c;
	
	cout<<"Enter second number:";
	cin>>b;
	switch(c) {
		case '+':
			cout<<"Result:" <<a+b;
			break;
			
		case '-':
			cout<<"Result:"<<	a-b;
			break;
		
		case '*':
			cout<<"Result:" <<a*b;
			break;
		case '/':
			if (b!=0)
				cout<<"Result:"<< a/b;
			else
				cout<<"Error: Division by zero!";
				break;
		default:
			cout<<"Invalid operator! ";
			break;			
					
	}	
}
