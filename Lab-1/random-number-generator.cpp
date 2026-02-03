#include<iostream>
#include<cstdlib>
#include<ctime>	
 using namespace std ;
 int main(){
		srand(time(0));
		for(int i= 1 ; i<=1 ; i++){
			int a = rand() % 6 +1 ;
			cout<<"zer"<<i<<":"<<a<<"\n";
			
		}
 }
