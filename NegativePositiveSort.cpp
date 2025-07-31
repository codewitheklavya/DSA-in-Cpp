#include<iostream>
#include<vector>
using namespace std;
void Change(vector<int> & v){
    int i=0;
    int j=v.size()-1;
    while(i<j){
        if(v[i] < 0 && v[j] > 0){
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++; 
            j--;
        }
        if(v[i]>0) i++;
        if(v[j]<0)j--;
    }


}

int main(){
    vector<int> v = {-1,-3,2,5,-4,9,7};
    for(int i=0;i<v.size();i++){
        cout<<v.at(i);
    }

    Change(v);
    for(int i=0;i<v.size();i++){
    cout<<v.at(i)<<endl;
    }
}