#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target){
    unordered_map<int, int> m;

    for(int i = 0; i < nums.size(); i++){
        int j = target - nums[i];
        if(m.find(j) != m.end()){
            return {m[j], i};
        }
        m[nums[i]] = i;
    }
    return {-1,1};

}

int main(){
    vector<int> nums = {2,7,11,15};
    int target = 9;
    vector<int> result = twoSum(nums, target);
    cout<<"Pairs are : [";
    cout << result[0] << ", " << result[1] << "]"<< endl;
    return 0;
}