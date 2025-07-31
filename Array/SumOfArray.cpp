#include<iostream>
using namespace std;
int main(){
    int n;
    int sum = 0;
    cout<<"enter the numbers for array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter "<<n<<" numbers: "<<endl;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    for(int i = 0;i<n;i++){
        sum = sum + arr[i];
    }

    cout<<"the sum of the array is: "<<sum<<endl;
    return 0;
}