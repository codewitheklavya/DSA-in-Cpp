#include<iostream>
using namespace std;
int main(){
    int arr[5] = {2,3,4,56,6},n,count = 0;
    cout<<"elements are: "<<endl;
    for(int i = 0;i<5;i++){
        cout<<arr[i]<<endl;
    }
    cout<<"enter a number: ";
    cin>>n;
    for(int i=0;i<5;i++){
        if(arr[i]>n){
            count++;
        }
    }
    cout<<endl;
    cout<<"there are only: "<<count<<" numbers greater than "<<n;
    return 0;
}