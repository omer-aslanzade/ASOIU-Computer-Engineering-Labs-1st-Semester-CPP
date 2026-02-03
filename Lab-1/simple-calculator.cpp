#include <iostream>
using namespace std;
int main(){
	int a,b;
	char c;
	
	cout<<" birinci ededi daxil edin";
	cin>>a;
	
	cout<<"emeli daxiledin(+,-,/,*, :";
	cin>>c;
	
	cout<<"ikinci ededi daxil edin";
	cin>>b;
	switch(c) {
		case '+':
			cout<<"netice:" <<a+b;
			break;
			
		case '-':
			cout<<"netice:"<<	a-b;
			break;
		
		case '*':
			cout<<"netice:" <<a*b;
			break;
		case '/':
			if (b!=0)
				cout<<"netice:"<< a/b;
			else
				cout<<"sifira bolme yoxdu";
				break;
		default:
			cout<<"nese yalnis var emmellerde yanlis elemis ola bilersen ";
			break;			
					
	}	
}
