#include<iostream>
#include<vector>
using namespace std;
void Change(vector<int>& v){
    int noo = 0;
    int noz = 0;
    for(int i=0;i<v.size();i++){
        if(v[i]==0) noz++;
        else noo++;
    }
    for(int i=0;i<v.size();i++){
        if(i<noz) v[i] = 0;
        else v[i] = 1;
    }
}
int main(){
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }


    Change(v);

    cout<<"sorted element is: "<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }

    return 0;
}