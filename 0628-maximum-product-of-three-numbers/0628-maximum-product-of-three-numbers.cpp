class Solution {
public:
    int maximumProduct(vector<int>& nums) {

        sort(nums.begin(), nums.end(), greater<>());
        int n = nums.size();

        int option1 = nums[0]*nums[1]*nums[2];
        int option2 = nums[0]*nums[n-2]*nums[n-1];
    
        return max(option1, option2);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna