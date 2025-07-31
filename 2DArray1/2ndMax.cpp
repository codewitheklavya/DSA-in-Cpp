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

    int max = arr[0][0];
    int smax = 0;
    for(int i =0;i<n;i++){
        for(int j=0;j<m;j++){
            if(max<arr[i][j] && max!=smax){
                smax = max;
                max = arr[i][j];
            }
        }
    }

    cout<<endl;
    cout<<max;
    cout<<endl;
    cout<<smax;
    return 0;
}