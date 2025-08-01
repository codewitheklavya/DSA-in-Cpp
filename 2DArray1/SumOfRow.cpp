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

    int index = 0;
    int max = -111111;
    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=0;j<m;j++){
            sum +=arr[i][j];
            if(max<sum){
                max = sum;
                index = i;
            }
        }
    }

    cout<<endl;
    cout<<"the highest sum of the row is: "<<index + 1<<" and sum is: "<<max;

return 0;
}