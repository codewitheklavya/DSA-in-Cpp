#include<iostream>
#include<vector>
using namespace std;
void multiply(vector<int>& arr,int &size,int i){
    int carry = 0;
    for(int j = 0;j<size;j++){
        int res = i * arr[j] + carry;
        arr[j] = res%10;
        carry = res/10; 
    }
    //i have to store carry also 
    while(carry > 0){
        arr[size] = carry%10;
        size++;
        carry = carry/10;
    }
}
int main(){
    vector<int> arr(10000,0);
    int n = 5;
    arr[0] = 1;
    int size = 1;
    for(int i=2;i<=n;i++){
        multiply(arr, size, i);
    }

    cout<<"result is: ";
    for(int i = size-1;i>=0;i--){
        cout<<arr[i];
    }

    return 0;
}