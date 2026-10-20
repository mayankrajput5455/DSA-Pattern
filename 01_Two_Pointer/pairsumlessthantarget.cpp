
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int countPair(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());

    int i = 0, j = nums.size() - 1;
    int count = 0;

    while (i < j) {
        if (nums[i] + nums[j] < target) {
            count += (j - i);
            i++;
        } else {
            j--;
        }
    }

    return count;
}

int main() {
    vector<int> nums = {-1,1,2,3,1};
    int target = 2;

    cout << "Pairs: " << countPair(nums, target) << endl;

    return 0;
}
