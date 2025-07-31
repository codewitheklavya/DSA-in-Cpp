#include<iostream>
#include<vector>
using namespace std;
int main(){
    int size;
    cout<<"enter size: ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    //find top 3 largest numbers
    cout<<"3 largest numbers are: "<<endl;
    int max = INT_FAST8_MIN;
    int smax = INT_FAST8_MIN;
    int tmax = INT_FAST16_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>max) max = arr[i];
    }
    for(int i=0;i<size-1;i++){
        if(arr[i]>smax ) smax = arr[i];
    }
    for(int i=0;i<size-2;i++){
        if(arr[i]>tmax ) tmax = arr[i];
    }
    cout<<"max value is: "<<max<<endl;
    cout<<"smax value is: "<<smax<<endl;
    cout<<"tmax value is: "<<tmax<<endl;
    return 0;
}