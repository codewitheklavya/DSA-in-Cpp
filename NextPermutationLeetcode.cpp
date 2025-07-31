#include<iostream>
#include<vector>
using namespace std;
class solution{
public:
        void reversePart(vector<int> &v,int x,int y){
        while(x<y){
        int temp = v[x];
        v[x] = v[y];
        v[y] = temp;
        x++;
        y--;
        return;
    }
    }
    void nextpermutation(vector<int> &nums){
        int n = nums.size();
        int idx = -1;
        for(int i=n-2;i>=0;i--){
            if(nums[i] < nums[i+1]){
                idx = i;
                break;
            }
        }
        if(idx==-1){
            reversePart(nums,0,n-1);
            return;
        }

        // 2) sorting
        reversePart(nums,0 + idx + 1,n-1);

        //3) finding just bigger element than idx
        int j =-1;
        for(int i = idx+1;i<n;i++){
            if(nums[i] > nums[idx]){
                j = i;
                break;
            }
        }

        //3) Swapping idx and idx+1
        int temp = nums[idx];
        nums[idx] = nums[j];
        nums[j] = temp;
        return;
    }


};

int main(){
    vector<int> v;
    int size;
    cout<<"enter a size : ";
    cin>>size;
    for(int i =0;i<size;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    solution obj;
    obj.nextpermutation(v);

    cout<<"next permutation is: ";
    for(int i=0;i<size;i++){
        cout<<v[i];
    }


}