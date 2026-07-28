class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.size();
        string res = "";

        if(n%2 == 0) {
            for(int i=0; i<n/2; i++){
                res += s[i];
            }
            sort(res.begin(), res.end());
            string temp = res;
            sort(temp.begin(), temp.end(), greater<>());
            return res+temp;
        }
        else{
            for(int i=0; i<n/2; i++){
                res += s[i];
            }
            sort(res.begin(), res.end());
            string temp = res;
            sort(temp.begin(), temp.end(), greater<>());
            return res+s[n/2]+temp;
        }
        return "";
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna