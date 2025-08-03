#include<iostream>
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
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    int arr2[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            arr2[i][j] = arr[j][i];
        }
    }

    cout<<endl;
    for(int j=0;j<n;j++){
        for(int i=0;i<m/2;i++){
            int temp = arr2[i][j];
            arr2[i][j] = arr2[n-i-1][j];
            arr2[n-i-1][j] = temp;
        }
        cout<<endl;
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}