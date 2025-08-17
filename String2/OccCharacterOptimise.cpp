#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s = "leetcode";
    vector<int> arr(26,0);
    for(int i=0;i<26;i++){
        char ch = s[i];
        int ascii = (int)ch;
        arr[ascii-97]++;//if it is a then a ascii value is 97, so 97-97 = 0, then ++, it mean plus that value from 0 to 1;
    }
    int max = 0;
    for(int i=0;i<26;i++){
        if(arr[i]>max) max = arr[i];
    }

    for(int i =0;i<26;i++){
        if(arr[i]==max){
            int ascii = i+97;
            char ch = (char)ascii;
            cout<<ch<<" "<<max<<endl;
        }
    }
    return 0;
}