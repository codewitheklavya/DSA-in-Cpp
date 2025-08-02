#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m;
    cout<<"enter rows of matrix: ";
    cin>>m;
    int n;
    cout<<"enter cols of matrix: ";
    cin>>n;
    cout<<endl;

    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    //printing
    cout<<endl;
    for(int i=m-1;i>=0;i--){
        if(i%2==0){
            for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        else{
            for(int j=n-1;j>=0;j--){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
return 0;
}