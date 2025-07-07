#include<iostream>
using namespace std;
int main(){
    int arr[5] = {23,44,15,76,88};
    for(int i = 0;i<5;i++){
        if(arr[i]<35){
            cout<<i<<endl;
        }
    }
    return 0;
}