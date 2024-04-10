#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
    int n = nums.size();
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n - 1; ++i) {
        if (nums[i] == nums[i + 1]) {
            return true;
        }
    }
    return false;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 5}; // Example vector with duplicate
    if (containsDuplicate(nums)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}

