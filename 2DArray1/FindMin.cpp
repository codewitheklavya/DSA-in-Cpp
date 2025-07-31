#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of row: ";
    cin>>n;
    int m;
    cout<<"enter size of coloumn: ";
    cin>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    int min = arr[0][0];
    for(int i =0;i<n;i++){
        for(int j=0;j<m;j++){
            if(min>arr[i][j]) min = arr[i][j];
        }
    }

    cout<<min;
    return 0;
}