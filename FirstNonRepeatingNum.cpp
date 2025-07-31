#include<iostream>
#include<vector>
using namespace std;
void FirstnonRepeating(vector<int> v,int n){
    bool flag = false;
    for(int i=0;i<n;i++){
        int j;
        for(j=0;j<n;j++){
            if(i!=j && v[i]==v[j]) break;
        }
        if(j==n){
            cout<<v[i]<<"is the first non repeating value.";
            flag = true;
            break;
        }
    }
    if(!flag) cout<<"there is no non repeating value.";
}

int main(){
    int n;
    cout<<"enter size: ";
    cin>>n;
    cout<<endl;
    cout<<"enter numbers: ";
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    FirstnonRepeating(v,n);

}
