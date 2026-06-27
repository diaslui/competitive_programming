class Solution {
public:
    int lengthOfLongestSubstring(string s) {

    map<char, int> m;
    int ans, current; ans = 0; current = 0;

    int l = 0;
    for (int r=0; r < s.size(); r++){
        m[s[r]]++;
        current++;
 
        while (m[s[r]] > 1){
            m[s[l]]--;
            current--;
            l++;
        }
 
        ans = max(current, ans);
   }
    return ans;


    }
};
