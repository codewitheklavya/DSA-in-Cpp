#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"enter the size of the array: "<<endl;
    cin>>size;
    int arr[size];
    cout<<"enter "<<size<<"numbers in an array: "<<endl;
    for(int i = 0;i<size;i++){
        cin>>arr[i];
    }
    // int min = INT8_MAX;
    // for(int i = 0;i<size;i++){
    int min = arr[0];
    for(int i = 0;i < size;i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }
    cout<<"the minimum element is: "<<min;

    return 0;
}