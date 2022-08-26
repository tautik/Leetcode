// 1413. Minimum Value to Get Positive Step by Step Sum
// https://leetcode.com/problems/minimum-value-to-get-positive-step-by-step-sum/
class Solution {
public:
    int minStartValue(vector<int>& nums) {
         set<int>s;
        vector<int>v;int hsh=0;
        for(auto i:nums) {
            hsh+=i;
            s.insert(hsh);
        }
        auto it=s.begin();
        if(*it<0){
            int ans=0;
            ans+=(*it)*-1;
            ans++;return ans;
        }else return 1;
        
    }
};
