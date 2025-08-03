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

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }

    cout<<endl;
    for(int j=0;j<n;j++){
        if(j%2==0){
        for(int i=m-1;i>=0;i--){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    else{
        for(int i=0;i<m;i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    }
return 0;
}