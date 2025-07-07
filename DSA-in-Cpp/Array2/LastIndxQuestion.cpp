#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(45);
    v.push_back(1);
    v.push_back(5);
    v.push_back(1);

    int Idx = -1;
    int x = 5;
    // for(int i=0;i<v.size();i++){
    //     if(v[i]==x) Idx = i;
    // }
    for(int i=v.size()-1;i>=0;i--){
        if(v[i]==x){
            Idx=i;
            break;
        }
    }

    cout<<Idx;
    return 0;
}