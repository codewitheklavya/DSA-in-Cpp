#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    bool flag = false;
    for(int i=0;i<s.length()/2;i++){
        if(s[i]!=s[s.length()-i-1]){
            flag = false;
            break;
        }
        else{
            flag = true;
        }
    }
    if(flag==true) cout<<"this sting is palindrome";
    else cout<<"this is not palindrome";
    return 0;
}