#include<iostream>
using namespace std;
int main(){
	int m,n;
	cout<<"enter rows size: ";
	cin>>m;
	cout<<endl;
	cout<<"enter coloum size: ";
	cin>>n;
	int arr[m][n];
	for(int i=0;i<m;i++){
	for(int j=0;j<n;j++){
		cin>>arr[i][j];
	}}
	for(int i=0;i<m;i++){
	for(int j=0;j<n;j++){
		cout<<arr[i][j]<<" ";
	}
	cout<<endl;
}
return 0;
}
