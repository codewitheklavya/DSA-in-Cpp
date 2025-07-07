#include<iostream>
#include<vector>
using namespace std;
void Display(vector<int> & a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void ReversePart(int i,int j,vector<int> & v){
    while(i<=j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
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
    int n = v.size();
    Display(v);
    int k;
    cout<<"enter rotate element: ";
    cin>>k;
    if(n<k) k = k % n;

    Display(v);
    cout<<endl;
    ReversePart(0,n-k-1,v);
    ReversePart(n-k,n-1,v);
    ReversePart(0,n-1,v);
    Display(v);
    return 0;
}