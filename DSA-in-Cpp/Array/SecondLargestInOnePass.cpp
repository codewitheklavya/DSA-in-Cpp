#include<iostream>
#include<climits>
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
    int max = INT_MIN;
    int Smax = INT_MIN;
    for(int i  = 0;i<size;i++){//bade number ko khojo aur fir jab update ho toh Smax me max value daal do
        if(arr[i]>max){
            Smax = max;//Smax me max ko daal diya 
            max = arr[i];

        }
        else if(arr[i]!=max && Smax<arr[i]){
            Smax = arr[i];
        }
    }
    cout<<endl<<"Largest number is: "<<max<<endl;
    cout<<endl<<"Second Largest Number is: "<<Smax;

    return 0;
}