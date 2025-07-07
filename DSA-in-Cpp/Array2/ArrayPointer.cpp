#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,5,6,6};
    int n = sizeof(arr)/sizeof(arr[1]);
    int* ptr = arr;
    for(int i=0;i<n;i++){
        cout<<ptr[i]<<" ";
    }
    return 0;
}