#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    cout<<"capacity is: ";
    cout<<v.capacity()<<" ";
    cout<<"size is: ";
    cout<<v.size()<<endl;

    v.push_back(2);
    cout<<"capacity is: ";
    cout<<v.capacity()<<" ";
    cout<<"size is: ";
    cout<<v.size()<<endl;

    v.push_back(3);
    cout<<"capacity is: ";
    cout<<v.capacity()<<" ";
    cout<<"size is: ";
    cout<<v.size()<<endl;

    v.push_back(4);
    cout<<"capacity is: ";
    cout<<v.capacity()<<" ";
    cout<<"size is: ";
    cout<<v.size()<<endl;
}