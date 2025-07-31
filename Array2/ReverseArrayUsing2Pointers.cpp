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

    //Now Reverse
    // int i=0;
    // int j=v.size()-1;
    // while(i<=j){//agr j bada h ya i ke equal h tb tk loop chalega
    //     int temp = v[i];
    //     v[i] = v[j];
    //     v[j] = temp;

    //     i++;
    //     j--;
    // }

    for(int i=0,j=v.size()-1;i<=j;i++,j--){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }
    Display(v);
    return 0;
}