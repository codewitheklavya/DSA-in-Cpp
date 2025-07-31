#include<iostream>
using namespace std;
int main(){
    int arr[10] = {2,3,1,4,5,6,7,8,9,10};
    int n = (sizeof (arr)/ sizeof (arr[0]));
    int x = 6;//i want to find the 3 numbers whose sum is equal to 6;
    int count = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==x){
                    count++;
                }
            }
        }
    }
    cout<<"numbers of triplets is: "<<count;
    
    return 0;
}