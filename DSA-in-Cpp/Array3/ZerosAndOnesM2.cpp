#include<iostream>
#include<vector>
using namespace std;
void Change(vector<int> & v){
    
}
int main(){
    vector<int> v;
    int n = v.size();
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);

    cout<<"before sroting: "<<endl;
    for(int i=0;i<n;i++){
        cout<<v.at(i);
    }

    Change(v);

    return 0;
}