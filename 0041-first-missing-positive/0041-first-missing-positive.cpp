class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        // One method is to use a hashtable named seen and keep the seen elements in that
        // Another one is Cycle Sort...

        int n = nums.size();

        int i=0; 
        while(i<n){
            if(nums[i]>0 && nums[i]<=n && nums[i] != nums[nums[i]-1]){
                swap(nums[i], nums[nums[i]-1]);
            }
            else{
                i++;
            }
        }

        for(int i=0; i<n; i++){
            if(nums[i] != i+1) return i+1;
        }

        return n+1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna