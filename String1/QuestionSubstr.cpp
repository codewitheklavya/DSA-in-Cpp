#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "eklavyas";
    int l = s.length()/2;
    cout<<s.substr(l,s.length());
    return 0;
}