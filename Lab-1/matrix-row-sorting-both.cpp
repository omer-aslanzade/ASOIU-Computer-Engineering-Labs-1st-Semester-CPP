#include<iostream>
using namespace std;
int main(){
	int n,m;
	cout<<"massivin setirlerinin sayini daxil et: ";
	cin>>n;
	cout<<"massivin sutunlarinin sayini daxil et: ";
	cin>>m;
	int a[n][m];
	cout<<" massivin elementlerini daxil et: "<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m-1;j++){
			for(int k=0;k<m-1;k++){
				if(a[i][k]<a[i][k+1]){
					int temp=a[i][k];
					a[i][k]=a[i][k+1];
					a[i][k+1]=temp;
				}
			}
		}
	}
	cout<<"azalan sira ile duzulusu: "<<" ";
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout << a[i][j] << " ";
		}
		cout<<endl;
	} 
	
}




// verilmis 2 olculu matrisin artma araligini tapin


#include<iostream>
using namespace std;
int main(){
	int n,m;
	cout<<"matrisin setrini mueyyen edin: ";
	cin>>n;
	cout<<"matrisin sutununu mueyyen edin: ";
	cin>>m;
	int a[n][m];
	cout<<"ededleri daxil edin: "<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m-1;j++){
			for(int k=0;k<m-1;k++){
				if(a[i][k]>a[i][k+1]){
					int temp=a[i][k];
					a[i][k]=a[i][k+1];
					a[i][k+1]=temp;
				}
			}
		}
	}
	cout<<"artma araligi: "<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<a[i][j]<<endl;
		}
	}
	
	
}
