#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    cout<<v.at(2)<<endl;
    v.at(2) = 3;
    cout<<v.at(2); 
    return 0;
}