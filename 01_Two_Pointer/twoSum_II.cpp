
#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
    int i = 0, j = numbers.size() - 1;

    while (i < j) {
        int sum = numbers[i] + numbers[j];

        if (sum > target) {
            j--;
        }
        else if (sum < target) {
            i++;
        }
        else {
            return {i + 1, j + 1};
        }
    }

    return {-1, -1};
}

int main() {
    vector<int> numbers = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = twoSum(numbers, target);

    cout << "Indices: [";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i < result.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    return 0;
}
