#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
    string s = "12344";
    int x = stoi(s);
    cout<<x+1<<endl;

    int a = 12345;
    string str = to_string(a);
    cout<<a<<endl;

    string ss = "12345675324676";
    long long y = stoll(ss);
    cout<<y+1<<endl;

    return 0;
}