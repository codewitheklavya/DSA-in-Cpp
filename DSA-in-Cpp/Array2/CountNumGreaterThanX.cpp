#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v ;
    v.push_back(2);
    v.push_back(12);
    v.push_back(22);
    v.push_back(8);
    v.push_back(3);
    v.push_back(6);

    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }

    cout<<endl;
    int x;
    cout<<" enter a 'x' value:  "<<endl;
    cin>>x;

    int count = 0;
    for(int i=0;i<v.size();i++){
        if(v[i]>x) count++;
    }

    cout<<"largest number than x is: "<<count;
    return 0;
}