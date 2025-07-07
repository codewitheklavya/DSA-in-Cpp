#include<iostream>
using namespace std;
int main(){
    int n;
    int x;
    cout<<"enter a size: "<<endl;
    cin>>n;
    int arr[n];

    cout<<"enter "<<n<<" numbers: "<<endl;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"enter a number for searching the element: "<<endl;
    cin>>x;

    bool flag = false;
    for(int i = 0;i<n;i++){
        if(arr[i]==x) flag = true;
    }

    if(flag==true){
        cout<<"number is present: "<<x;
    }
    else cout<<"number is not present";

    
    
    return 0;
}