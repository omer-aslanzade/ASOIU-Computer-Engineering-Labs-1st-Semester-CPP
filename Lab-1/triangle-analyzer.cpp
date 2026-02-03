#include<iostream>
#include<cmath>
using namespace std;                            
int main(){
	double a,b,c,s,p;
	cout<< "Enter first side:";
	cin>>a;
	cout<<"Enter the second side:";
	cin>>b;
	cout<<"Enter the third side:";
	cin>>c;
	if(a+b>c){
		cout<<"This is a valid triangle."<<endl;
		
	p=(a+b+c)/2;
	s= p*(p-a)*(p-b)*(p-c);
	s=sqrt(s);
	cout<<"Area:"<<s<<endl;
	
	}
	
	if(a==b&&b==c){
		cout<<"Type: Equilateral triangle"<<endl;
	}
	else if(a==b||b==c||a==c){
		cout<<"Type: Isosceles triangle"<<endl;
	}
	else{
		cout<<"Type: Scalene triangle"<<endl;
	}
	double a2=a*a,b2=b*b,c2=c*c;
	if(a2+b2==c2||a2+c2==b2||b2+c2==a2){
		cout<<"Angle: Right-angled triangle"<<endl;
	}
	else if(a2+b2<c2||a2+c2<b2||b2+c2<a2){
		cout<<"Angle: Obtuse-angled triangle"<<endl;
	}
	else{
		cout<<"Angle: Acute-angled triangle"<<endl;
	}
	
	else {
		cout<<"Invalid triangle! These sides cannot form a triangle."<<endl;
	}
			
}
