#include<iostream>
#include<algorithm>
#include<string>
#include<sstream>
using namespace std;
int main(){
    string arr[] = {"0123","0023","456","00182","980","002901"};
    int max = stoi(arr[0]);
    string maxS = arr[0];
    int n = sizeof (arr)/sizeof(arr[0]);
    for(int i=1;i<n;i++){
        int x = stoi(arr[i]);
        if(x>max){  
            max = x;
            maxS = arr[i];
        }
    }
    cout<<maxS;
    return 0;
}