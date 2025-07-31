#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a numbers for students you want: ";
    cin>>n;
    int arr[n];
    cout<<"enter "<<n<<" numbers: "<<endl;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"these are the roll numbers of the students who got below than 35: "<<endl;

    for(int i = 0;i<n;i++){
        if(arr[i]<35){
            cout<<i<<endl;
        }
    }
    return 0;
}