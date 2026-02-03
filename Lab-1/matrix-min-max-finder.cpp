#include<iostream>
using namespace std;
int main(){
	int n,m,min,max;
	cout<<"setirlerin sayini daxil edin: ";
	cin>>n;
	cout<<"sutunlarin sayini daxil edin: ";
	cin>>m;
	cout<<"ededleri daxil edin:"<<endl;
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
min=a[0][0];
max=a[0][0];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j]>max) max=a[i][j];
			if(a[i][j]<min) min=a[i][j];
		}
	}
	cout<<"maksimum eded: "<<max<<endl;
	cout<<"minumum eded: "<<min<<endl;
}
