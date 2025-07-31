#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"enter a size of the array: ";
    cin>>size;
    int arr[size];
    cout<<endl;
    cout<<"enter "<<size<<" numbers in the array: ";
    for(int i =0;i<size;i++){
        cin>>arr[i];
        cout<<" ";
    }

    bool flag = false;
    for(int i = 0;i<size-1;i++){
        for(int j = i+1;j<size;j++){
            if(arr[i]==arr[j]){
                cout<<"duplicate element is: "<<arr[i]<<endl;
                flag = true;
                break;
            }
        }
    }
    if(flag!=true){
        cout<<"number is not present";
    }
    return 0;
}
