#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"enter 5 elements in an array: ";
    for(int i = 0;i<5;i++){
        cin>>arr[i];
    }
    cout<<"entered elements are: "<<endl;
    for(int i = 0;i<5;i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl;

    int max = arr[0];
    for(int i = 1;i<5;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    cout<<"largest number is: "<<max<<endl;
    int Smax = INT_FAST8_MIN;
    for(int i = 0;i<5;i++){
        if(arr[i]!=max && Smax<arr[i]){
            Smax = arr[i];
        }
    }
    
    cout<<"Second largest number is: "<<Smax;
    return 0;
}