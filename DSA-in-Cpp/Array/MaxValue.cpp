#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"enter the size of the array: ";
    cin>>size;
    int arr[size];
    cout<<"enter "<<size<<" element in array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"these are the entered numbers: "<<endl;
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<endl;
    }    

    cout<<endl;

    int max = INT_FAST8_MIN;
    for(int i = 0;i<size;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }


    cout<<"the largest number is: "<<max;
    return 0;
}