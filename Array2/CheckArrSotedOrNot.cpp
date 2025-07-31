#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"enter a size: ";
    cin>>size;

    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    for(int i=0;i<size;i++){
        cout<<arr[i];
    }

    bool ischeck = true;
    for(int i=0;i<size-1;i++){
       if(arr[i]>arr[i+1]) ischeck = false;
    }

    if(ischeck) cout<<"sorted"<<endl;
    else cout<<" not sorted";
    return 0;
}