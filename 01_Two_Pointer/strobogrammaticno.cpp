#include<iostream>
#include<unordered_map>
using namespace std;

bool isStrobagrammaticNo(string nums){
    unordered_map<char, char> mp = {
        {'0', '0'},
        {'1', '1'},
        {'6', '9'},
        {'8', '8'},
        {'9', '6'}
    };

    int left = 0, right = nums.length()-1;

    while(left <= right){
        if(mp.find(nums[left]) == mp.end()){
            return false;
        }

        if(mp[(nums[left])] != nums[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main(){
    string nums = "168891";
    string nums2 = "168861";
    cout<<isStrobagrammaticNo(nums)<<endl;
    cout<<isStrobagrammaticNo(nums2)<<endl;
    return 0;
}