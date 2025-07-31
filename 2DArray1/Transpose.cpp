#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter rows size: ";
    cin>>m;
    int n;
    cout<<"enter coloums size: ";
    cin>>n;
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
    // for(int j=0;j<n;j++){
    //     for(int i=0;i<m;i++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    int t[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            t[i][j] = arr[j][i];//because i want transpose of matrix
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}