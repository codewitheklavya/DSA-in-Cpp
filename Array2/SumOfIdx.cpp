#include<iostream>
#include<vector>
using namespace std;
void IndexSum(vector<int> & v){
    int n = v.size();
    int SumE = 0;
    int SumO = 0;
    for(int i=0;i<n;i++){
        if(i%2==0) SumE = SumE+v[i];
        else SumO = SumO + v[i];
    }
    cout<<"difference between both numbers is: "<<SumE-SumO;
}
int main(){
    vector<int> v;
    v.push_back(2);//0
    v.push_back(3);//1
    v.push_back(4);//2
    v.push_back(10);//3
    v.push_back(6);//4
    v.push_back(7);//5
    v.push_back(8);//6

    IndexSum(v);

    return 0;
}