#include<iostream>
#include<vector>
using namespace std;
void LargestNum(int arr[], int size){
    int max = INT_FAST8_MIN;
    int smax = INT_FAST8_MIN;
    int tmax = INT_FAST16_MIN;
    
    for(int i=0;i<size;i++){//11,11,2,3,4
        if(arr[i]>max){//11
            tmax = smax;
            smax = max;
            max = arr[i];//11,
        }
        else if(arr[i]>smax && arr[i]!=max){//smax = 0;
            tmax = smax;
            smax = arr[i];
        }
        else if(arr[i]>tmax && arr[i]!=max && arr[i]!=smax){
            tmax = arr[i];
        }
    }
    cout<<"max value is: "<<max<<endl;
    if(smax==INT_FAST8_MIN) cout<<"no any second largest number is here.  thank you"<<endl;
    else cout<<"smax value is: "<<smax<<endl;
    if(tmax==INT_FAST8_MIN)cout<<"no any third largest number is here. thank you"<<endl;
    else cout<<"tmax value is: "<<tmax<<endl;
}
int main(){
    int size;
    cout<<"enter size: ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    LargestNum(arr,size);
   
    return 0;
}