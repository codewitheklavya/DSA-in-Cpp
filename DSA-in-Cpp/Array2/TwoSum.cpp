#include<iostream>
#include<vector>
using namespace std;
int main(){
   int x;
   cout<<"enter target: ";//for enter target like = 7
   cin>>x;
   cout<<endl;
   vector<int> v;
   int n;
   cout<<"enter array size: ";//enter size of the array like = 5
   cin>>n;

   cout<<"enter elements: ";
   for(int i=0;i<n;i++){
    int z;
    cin>>z;
    v.push_back(z);//entering elements in the vector using push_back function
   }

   for(int i=0;i<v.size()-1;i++){
    for(int j=i+1;j<v.size();j++){//starting from i+1
        if(v[i]+v[j]==x){//logic
            cout<<"("<<i<<","<<j<<")"<<endl;
        }
    }
}

    return 0;
}