#include<iostream>
#include<vector>
using namespace std;
void Display(vector<int> & a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v;
    
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    Display(v);

    vector<int> v2(v.size());

    for(int i=0;i<v.size();i++){
        //i+j=size-1
        // int j = v.size()-1-i;
        v2[i] = v[v.size()-1-i];
    }
    Display(v2);
    return 0;
}