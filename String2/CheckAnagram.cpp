#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    string t;
    s = "eklavyasignh";
    t = "singheklaoya";
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t){
        cout<<"yes both are anagram";
    }
    else{
        cout<<"no, not a anagram";
    }
    return 0;
}