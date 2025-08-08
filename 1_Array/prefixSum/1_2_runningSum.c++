#include <iostream>
#include <vector>

using namespace std;

vector<int> runningSum(vector<int>& nums) {
    int n = nums.size();
    vector<int> result(n);
    result[0] = nums[0]; // First element remains the same

    for (int i = 1; i < n; i++) {
        result[i] = result[i - 1] + nums[i];
    }

    return result;
}


int main() {
    vector<int> nums = {1, 2, 3, 4};
    vector<int> result = runningSum(nums);

    cout << "Running Sum: ";
    for (int num : result) {
        cout << num << " ";
    }

    return 0;
}
