#include<iostream>
using namespace std;
int PassingArray(int arr[],int n){
    cout<<"enter "<<n<<" numbers: "<<endl;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"entered numbers are: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
    int n;
    cout<<"enter the size of the array: ";
    cin>>n;
    int arr[n];
    PassingArray(arr,n);
    return 0;
}