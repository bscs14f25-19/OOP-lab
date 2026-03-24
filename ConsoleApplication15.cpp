#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> m;

    for (int i = 0; i < nums.size(); i++) {
        int needed = target - nums[i];

        if (m.find(needed) != m.end()) {
            return { m[needed], i };
        }

        m[nums[i]] = i;
    }

    return {};
}

int main() {
    vector<int> nums = { 2, 7, 11, 15 };
    int target = 9;

    vector<int> ans = twoSum(nums, target);

    cout << ans[0] << " " << ans[1];

    return 0;
}