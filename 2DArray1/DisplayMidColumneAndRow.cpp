#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size: ";
    cin>>n;

    cout<<endl;
    int arr[n][n];

    cout<<"enter array elements: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"2D array is: ";
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"now printing row and coloumne of the middle of the sqaure matrix: ";
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==n/2 || j==n/2){
                cout<<arr[i][j]<<" ";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

return 0;
}