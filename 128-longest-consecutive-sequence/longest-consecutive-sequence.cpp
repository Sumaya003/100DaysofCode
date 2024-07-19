class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int count = 1;
        int ans = 1;
        for(int i = 1;i<nums.size();i++){
            if(nums[i] - 1 == nums[i-1]){
                count++;
                cout<<count<<" ";
            }else if(nums[i] == nums[i-1]){
                continue;
            }
            else{
                ans = max(ans,count);
                count = 1;
            }
        }
        ans = max(ans,count);
        return ans;
    }
};