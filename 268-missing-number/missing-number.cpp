class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // int sum1 = 0;
        // for(int i = 0;i<nums.size() + 1;i++){
        //     sum1 += i;
        // }

        // int sum2 = 0;

        // for(int j=0;j<nums.size();j++){
        //     sum2 += nums[j];

        // }

        // int ans = sum1-sum2;

        // return sum1-sum2;
        sort(nums.begin(),nums.end());
        for(int i = 0;i<nums.size();i++){
            if(nums[i]!= i){
                return i;
            }
        }
        return nums.size();
        
    }
};