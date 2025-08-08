// DIVISION METHOD

#include <iostream>
#include <vector>

using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    int product = 1;
    int p2 = 1;
    int noz = 0;
    for(int i = 0;i<n;i++){
        if(nums[i] == 0) noz++;
        product *= nums[i];
        if(nums[i]!=0) p2 *= nums[i];  
    }
    
    for(int i = 0;i<n;i++){
        if(noz>1) p2 = 0;
        if(nums[i]==0) nums[i] = p2;
        else nums[i] = product / nums[i]; 
    }
    return nums;

}

int main() {
    vector<int> nums = {1,2,0,3, 0};
    vector<int> result = productExceptSelf(nums);

    cout << "Array formed: ";
    for (int num : result) {
        cout << num << " ";
    }

    return 0;
}
