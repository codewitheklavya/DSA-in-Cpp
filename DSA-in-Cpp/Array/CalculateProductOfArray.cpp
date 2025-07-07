#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1,2,3,5,6};
    cout<<"entered number is: ";
    for(int i = 0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    int sum = 1;
    for(int i = 0;i<5;i++){
        sum = sum * arr[i];
    }
    cout<<endl;
    cout<<"product of the array is: "<<sum;

    return 0;
}