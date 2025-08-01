#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter size of matrix row and coloumn: ";
    cin>>n>>m;

    cout<<endl;
    int arr[n][m];

    cout<<"enter array elements: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    cout<<endl;
    cout<<"enter all four coordinates: ";
    int l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;

    int sum = 0;

    for(int i=min(l1,l2);i<=max(l1,l2);i++){
        for(int j =min(r1,r2);j<=max(r1,r2);j++){
            sum+=arr[i][j];
        }
    }

    cout<<endl;
    cout<<"sum of this coordinates is: ";
    cout<<sum;
    return 0;
}