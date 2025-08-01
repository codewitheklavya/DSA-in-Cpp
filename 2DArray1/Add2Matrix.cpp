#include<iostream>
using namespace std;
int main(){
    int arr1[2][2] = {1,2,3,4};
    int arr2[2][2] = {1,2,3,4};
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }    

    cout<<endl;

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            arr1[i][j] +=arr2[i][j];
        }
        cout<<endl;
    }

    cout<<endl;
    cout<<"Added Array: ";
    cout<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }


    
    return 0;
}