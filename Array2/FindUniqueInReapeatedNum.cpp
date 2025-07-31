#include<iostream>
#include<vector>
using namespace std;
void FindUnique(vector<int> & v){

    int n = v.size();
    int Unique = 0;
    bool flag = false;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(v[i]!=v[j]) {
                flag = true;
                Unique = v[i];
                break;
            }
            else break;
        }
    }
    if(flag==true) cout<<"unique number is: "<<Unique;
    else cout<<"no any unique num is here"<<endl;
}
int main(){
    vector<int> v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(2);
    v.push_back(1);
    v.push_back(3);
    v.push_back(7);
    v.push_back(3);

    FindUnique(v);
    return 0;
}