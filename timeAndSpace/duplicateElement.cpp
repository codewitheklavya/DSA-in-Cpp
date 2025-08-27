#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr = {6,3,2,4,1,7,5,5};
    int n = arr.size()-1;
    cout<<n<<endl;
    int sum = 0;
    for(int i=0;i<=n;i++){
        sum = sum + arr[i];
    }
    int s = n*(n+1)/2;
    cout<<sum-s;
    return 0;
}