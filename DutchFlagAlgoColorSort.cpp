#include<iostream>
#include<vector>
using namespace std;
void Change(vector<int> &nums){
    int low = 0;
    int high = nums.size()-1;
    int mid = 0;
    while(mid<=high){
        if(nums[mid]==0){//Always play with mid
            int temp = nums[mid];
            nums[mid] = nums[low];
            nums[low] = temp;
            low++;
            mid++;
        }
        if(nums[mid]==2){
            int temp = nums[mid];
            nums[mid] = nums[high];
            nums[high] = temp;
            high--;
        }
        if(nums[mid]==1){
            mid++;
        }
    }
    return;
}
int main(){
    vector<int> v = {1,2,0,1,0,2};
    cout<<"Before Sorting: ";
    for(int i=0;i<v.size()-1;i++){
        cout<<v.at(i);
    }
    
    Change(v);
    cout<<endl;
    cout<<"After Sorting: ";
    for(int i=0;i<v.size()-1;i++){
        cout<<v.at(i);
    }
}
// while(high>mid){
//     if(nums[low]==0) low++;
//     if(nums[mid]==1) mid++;
//     if(nums[high]==2) high--;
//     if(nums[low]!=0 && nums[mid]==0){
//         int temp = nums[low];
//         nums[low] = nums[mid];
//         nums[mid] = temp;
//         low++;
//         mid++;
//     }
//     if(nums[mid]==2 && nums[high]!=2){
//         int temp = nums[mid];
//         nums[mid] = nums[low]; 
//         nums[low] = temp;
//         mid++;
//         high--;
//     }

//         return nums;
//     }
// }